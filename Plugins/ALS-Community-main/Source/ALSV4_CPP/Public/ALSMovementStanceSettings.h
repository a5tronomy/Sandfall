#pragma once
#include "CoreMinimal.h"
#include "ALSMovementSettings.h"
#include "ALSMovementStanceSettings.generated.h"

USTRUCT()
struct FALSMovementStanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FALSMovementSettings Standing;
    
    UPROPERTY(EditAnywhere)
    FALSMovementSettings Crouching;
    
    ALSV4_CPP_API FALSMovementStanceSettings();
};

