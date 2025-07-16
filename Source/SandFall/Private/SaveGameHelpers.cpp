#include "SaveGameHelpers.h"

USaveGameHelpers::USaveGameHelpers() {
}

bool USaveGameHelpers::SaveGameToPath(USaveGame* SaveGameObject, const FString& SaveFilePath) {
    return false;
}

USaveGame* USaveGameHelpers::LoadGameFromPath(const FString& SaveFilePath) {
    return NULL;
}

void USaveGameHelpers::CopyIdenticalProperties(UObject* FromObject, UObject* ToObject) {
}


