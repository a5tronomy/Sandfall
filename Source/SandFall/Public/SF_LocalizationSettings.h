#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AssetGroupSubLocaleWrapper.h"
#include "SF_LocalizationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SANDFALL_API USF_LocalizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FAssetGroupSubLocaleWrapper> AssetsGroupsCultureWrapper;
    
public:
    USF_LocalizationSettings();

};

