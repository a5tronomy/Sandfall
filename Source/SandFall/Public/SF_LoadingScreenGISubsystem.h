#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/LatentActionManager.h"
#include "LoadingScreenData.h"
#include "Templates/SubclassOf.h"
#include "SF_LoadingScreenGISubsystem.generated.h"

class UObject;
class USF_BlueprintLatentAction;
class USF_LoadingScreenWidget;
class UWorld;

UCLASS(BlueprintType)
class SANDFALL_API USF_LoadingScreenGISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USF_LoadingScreenWidget* CurrentWidgetBuffer;
    
    UPROPERTY()
    USF_BlueprintLatentAction* LatentActionOnLevelLoadingObj;
    
public:
    USF_LoadingScreenGISubsystem();

    UFUNCTION(BlueprintCallable)
    void StopPostLoadingScreenTransition();
    
    UFUNCTION(BlueprintCallable)
    void OverrideNextLoadingScreenData(FLoadingScreenData dataOverride);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void OpenLevelWithLoadingScreen(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bAbsolute, const FString& Options, TSubclassOf<USF_LoadingScreenWidget> LoadingScreenOverride);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void OpenLevelBySoftPtrWithLoadingScreen(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bAbsolute, const FString& Options, TSubclassOf<USF_LoadingScreenWidget> LoadingScreenOverride);
    
private:
    UFUNCTION()
    void OnLoadingScreenFinished();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLoadingScreenSubSystemActive();
    
};

