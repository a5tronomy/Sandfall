#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EALSMovementState.h"
#include "EALSViewMode.h"
#include "ALSAnimCharacterInformation.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimCharacterInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator AimingRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator CharacterActorRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector RelativeVelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector MovementInput;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bHasMovementInput;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float MovementInputAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float AimYawRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float ZoomAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    EALSMovementState PrevMovementState;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    EALSViewMode ViewMode;
    
    ALSV4_CPP_API FALSAnimCharacterInformation();
};

