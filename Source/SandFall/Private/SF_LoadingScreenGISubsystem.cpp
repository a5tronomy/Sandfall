#include "SF_LoadingScreenGISubsystem.h"
#include "Templates/SubclassOf.h"

USF_LoadingScreenGISubsystem::USF_LoadingScreenGISubsystem() {
    this->CurrentWidgetBuffer = NULL;
    this->LatentActionOnLevelLoadingObj = NULL;
}

void USF_LoadingScreenGISubsystem::StopPostLoadingScreenTransition() {
}

void USF_LoadingScreenGISubsystem::OverrideNextLoadingScreenData(FLoadingScreenData dataOverride) {
}

void USF_LoadingScreenGISubsystem::OpenLevelWithLoadingScreen(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bAbsolute, const FString& Options, TSubclassOf<USF_LoadingScreenWidget> LoadingScreenOverride) {
}

void USF_LoadingScreenGISubsystem::OpenLevelBySoftPtrWithLoadingScreen(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bAbsolute, const FString& Options, TSubclassOf<USF_LoadingScreenWidget> LoadingScreenOverride) {
}

void USF_LoadingScreenGISubsystem::OnLoadingScreenFinished() {
}

bool USF_LoadingScreenGISubsystem::IsLoadingScreenSubSystemActive() {
    return false;
}


