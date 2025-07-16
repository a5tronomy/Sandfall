#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XeSSSettings.generated.h"

UCLASS(Config = Engine)
class UXeSSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableXeSSInEditorViewports;
    
    UXeSSSettings();

};

