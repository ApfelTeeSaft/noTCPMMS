#include <iostream>
#include <bitset>
#include <string>
#include "../CppSDK/SDK.hpp"
#include "../websocketpp/client.hpp"
#include "../websocketpp/config/asio_no_tls_client.hpp"

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


    auto PlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    std::cout << "found controller" << std::endl;
    auto PlayerState = PlayerController->PlayerState;
    std::cout << "found playerstate" << std::endl;

    std::string binary_representation;
    int shift = 1;
    std::string PlayerName = PlayerState->GetPlayerName().ToString();

    if (PlayerName != "" && PlayerState && PlayerController) {
        std::cout << "Most likely found playername: " << PlayerName << std::endl;
    }
    else {
        std::cout << "Missing required info, Controller, PlayerState or PlayerName might be missing or giving a incorrect resonse" << std::endl;
    }

   // SDK::UKismetSystemLibrary::ExecuteConsoleCommand(SDK::UWorld::GetWorld(), L"open 127.0.0.1", PlayerController);
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


// websocketpp copy paste from other lib
typedef websocketpp::client<websocketpp::config::asio_client> client;

void connectWebSocket(const std::string& playerName) {
    if (playerName.empty()) {
        return;
    }

    client ws_client;

    try {
        ws_client.init_asio();

        // connec handler
        ws_client.set_open_handler([&ws_client](websocketpp::connection_hdl hdl) {
            std::cout << "Connected to WebSocket server!" << std::endl;
            ws_client.send(hdl, "Hello from WebSocket++ Client!", websocketpp::frame::opcode::text);
            });

        ws_client.set_message_handler([](websocketpp::connection_hdl, client::message_ptr msg) {
            std::cout << "Received message from server: " << msg->get_payload() << std::endl;
            });

        // CONNECTION LOL
        websocketpp::lib::error_code ec;
        client::connection_ptr con = ws_client.get_connection("ws://localhost:5000", ec);
        if (ec) {
            std::cout << "Could not create connection: " << ec.message() << std::endl;
            return;
        }

        // start loop for listen
        ws_client.connect(con);
        ws_client.run();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}