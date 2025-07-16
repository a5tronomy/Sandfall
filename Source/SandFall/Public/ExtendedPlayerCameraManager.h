#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "ExtendedPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class SANDFALL_API AExtendedPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AExtendedPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldPlayCameraShake() const;
    
};

