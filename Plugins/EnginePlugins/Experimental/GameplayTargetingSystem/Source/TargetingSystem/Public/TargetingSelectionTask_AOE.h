#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "ETargetingAOEShape.h"
#include "TargetingRequestHandle.h"
#include "TargetingTask.h"
#include "TargetingSelectionTask_AOE.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingSelectionTask_AOE : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETargetingAOEShape ShapeType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionObjectTypes;
    
    UPROPERTY(EditAnywhere)
    FVector DefaultSourceOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRelativeOffset: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreInstigatorActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTraceComplex: 1;
    
    UPROPERTY(EditAnywhere)
    FVector HalfExtent;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat Radius;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat HalfHeight;
    
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
public:
    UTargetingSelectionTask_AOE();

protected:
    UFUNCTION(BlueprintNativeEvent)
    FQuat GetSourceRotation(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle) const;
    
};

