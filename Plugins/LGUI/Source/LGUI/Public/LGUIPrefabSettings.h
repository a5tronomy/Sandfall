#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIPrefabSettings.generated.h"

UCLASS(Config = Engine)
class LGUI_API ULGUIPrefabSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bLogPrefabLoadTime;
    
    ULGUIPrefabSettings();

};

