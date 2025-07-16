#pragma once
#include "CoreMinimal.h"
#include "ALSCameraGaitSettings.h"
#include "ALSCameraStateSettings.generated.h"

USTRUCT()
struct FALSCameraStateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FALSCameraGaitSettings VelocityDirection;
    
    UPROPERTY(EditAnywhere)
    FALSCameraGaitSettings LookingDirection;
    
    UPROPERTY(EditAnywhere)
    FALSCameraGaitSettings Aiming;
    
    ALSV4_CPP_API FALSCameraStateSettings();
};

