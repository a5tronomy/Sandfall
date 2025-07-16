#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALSCameraSettings.generated.h"

USTRUCT()
struct FALSCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TargetArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector SocketOffset;
    
    UPROPERTY(EditAnywhere)
    float LagSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotationLagSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bDoCollisionTest;
    
    ALSV4_CPP_API FALSCameraSettings();
};

