#include <iostream>
#include <bitset>
#include <string>
#include <chrono>
#include <thread>
#include "../CppSDK/SDK.hpp"
#include "../IXWebSocket-11.4.5/ixwebsocket/IXWebSocket.h"

static void AllocateConsole()
{
    AllocConsole();

    FILE* stream;
    freopen_s(&stream, "CONOUT$", "w", stdout);
    freopen_s(&stream, "CONOUT$", "w", stderr);
    SetConsoleTitleA("RewindClient - V1.11");
}
bool RewindClientOnline = false;

static void StartRewindClient() {
    if (RewindClientOnline == true) {
        return;
    }
    RewindClientOnline = true;


    std::string binary_representation;
    int shift = 1;
    if (GetAsyncKeyState(VK_F3) & 0x01)
    {
        auto PlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
        std::cout << "found controller" << std::endl;
        auto PlayerState = PlayerController->PlayerState;
        std::cout << "found playerstate" << std::endl;
        SDK::FString PlayerName = PlayerState->GetPlayerName();
        const TCHAR* TCHARPlayerName = PlayerName.CStr();
        std::cout << "Most likely found tcharPlayerName: " << TCHARPlayerName << std::endl;
        std::cout << "Most likely found PlayerName:" << PlayerName << std::endl;
    }
}

void (*oProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters);
void hkProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
{
    std::string FunctionName = Function->GetName();

    if (FunctionName == "ReadyToStartMatch")
    {
        auto PlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
        auto PlayerState = PlayerController->PlayerState;
        std::string PlayerName = PlayerState->GetPlayerName().ToString();

		if (PlayerName != "")
		{
            connectWebSocket(PlayerName);
		}
	}
    oProcessEvent(Object, Function, Parameters);
}

void connectWebSocket(const std::string& playerName) {
    if (playerName.empty()) {
        return;  // No player name, do not connect
    }

    ix::WebSocket ws;

    ws.setUrl("ws://localhost:5000");

    ws.setOnMessageCallback([&ws, &playerName](const ix::WebSocketMessagePtr& msg) {
        if (msg->type == ix::WebSocketMessageType::Open) {
            // When WebSocket is connected, send the playerName
            std::cout << "WebSocket connected!" << std::endl;
            ws.send(playerName);
            std::cout << "Sent playerName: " << playerName << std::endl;

            // Start a thread to send heartbeat messages
            std::thread heartbeatThread(sendHeartbeat, std::ref(ws));
            heartbeatThread.detach();
        }
        else if (msg->type == ix::WebSocketMessageType::Message) {
            // Handle incoming messages from the server
            std::cout << "Received message: " << msg->str << std::endl;
            if (msg->str == "NEXT: JOIN") {
                std::cout << "Received NEXT: JOIN command from the server." << std::endl;
                // Wait for the next message which should be an IP address
            }
            else if (msg->str.find("IP: ") == 0) {
                // Received an IP address from the server
                std::string ipAddress = msg->str.substr(4);
                std::cout << "Received IP address: " << ipAddress << std::endl;
                auto PlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
                std::wstring command = L"open " + std::wstring(ipAddress.begin(), ipAddress.end());
                SDK::UKismetSystemLibrary::ExecuteConsoleCommand(SDK::UWorld::GetWorld(), command.c_str(), PlayerController);
            }
        }
        else if (msg->type == ix::WebSocketMessageType::Error) {
            std::cerr << "Error: " << msg->errorInfo.reason << std::endl;
        }
        else if (msg->type == ix::WebSocketMessageType::Close) {
            std::cout << "WebSocket closed. Code: " << msg->closeInfo.code
                << " Reason: " << msg->closeInfo.reason << std::endl;
        }
        });

    ws.start();

    while (ws.getReadyState() == ix::ReadyState::Open) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    ws.stop();
    std::cout << "WebSocket connection stopped." << std::endl;
}

void sendHeartbeat(ix::WebSocket& ws) {
    while (ws.getReadyState() == ix::ReadyState::Open) {
        ws.send("HEARTBEAT");
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
}