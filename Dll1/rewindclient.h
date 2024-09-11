#pragma once
#include "../CppSDK/SDK.hpp"
#include "util.h"

static void Idk() {
    auto PlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    SDK::UKismetSystemLibrary::ExecuteConsoleCommand(SDK::UWorld::GetWorld(), L"open 127.0.0.1", PlayerController);
}