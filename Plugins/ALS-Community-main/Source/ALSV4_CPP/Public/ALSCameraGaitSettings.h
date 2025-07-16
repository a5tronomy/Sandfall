#pragma once
#include "CoreMinimal.h"
#include "ALSCameraSettings.h"
#include "ALSCameraGaitSettings.generated.h"

USTRUCT()
struct FALSCameraGaitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FALSCameraSettings Walking;
    
    UPROPERTY(EditAnywhere)
    FALSCameraSettings Running;
    
    UPROPERTY(EditAnywhere)
    FALSCameraSettings Sprinting;
    
    UPROPERTY(EditAnywhere)
    FALSCameraSettings Crouching;
    
    ALSV4_CPP_API FALSCameraGaitSettings();
};

