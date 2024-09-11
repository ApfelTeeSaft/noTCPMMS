#pragma once
#include <iostream>
#include <bitset>
#include <string>
#include "../CppSDK/SDK.hpp"

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