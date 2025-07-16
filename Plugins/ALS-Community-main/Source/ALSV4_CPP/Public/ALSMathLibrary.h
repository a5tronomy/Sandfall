#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ALSComponentAndTransform.h"
#include "EALSMovementDirection.h"
#include "ALSMathLibrary.generated.h"

class UCapsuleComponent;

UCLASS(BlueprintType)
class ALSV4_CPP_API UALSMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UALSMathLibrary();

    UFUNCTION(BlueprintCallable)
    static FTransform TransformSub(const FTransform& T1, const FTransform& T2);
    
    UFUNCTION(BlueprintCallable)
    static FTransform TransformAdd(const FTransform& T1, const FTransform& T2);
    
    UFUNCTION(BlueprintCallable)
    static FTransform MantleComponentLocalToWorld(const FALSComponentAndTransform& CompAndTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCapsuleLocationFromBase(FVector BaseLocation, float ZOffset, UCapsuleComponent* Capsule);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCapsuleBaseLocation(float ZOffset, UCapsuleComponent* Capsule);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleHasRoomCheck(UCapsuleComponent* Capsule, FVector TargetLocation, float HeightOffset, float RadiusOffset, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool DrawDebugTrace);
    
    UFUNCTION(BlueprintCallable)
    static EALSMovementDirection CalculateQuadrant(EALSMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle);
    
    UFUNCTION(BlueprintCallable)
    static bool AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer);
    
};

