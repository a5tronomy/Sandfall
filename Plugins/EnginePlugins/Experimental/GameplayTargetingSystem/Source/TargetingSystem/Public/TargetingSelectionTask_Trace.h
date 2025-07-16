#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "ETargetingTraceType.h"
#include "TargetingRequestHandle.h"
#include "TargetingTask.h"
#include "TargetingSelectionTask_Trace.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingSelectionTask_Trace : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETargetingTraceType TraceType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultSweptTraceRadius;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultSweptTraceCapsuleHalfHeight;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultSweptTraceBoxHalfExtentX;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultSweptTraceBoxHalfExtentY;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultSweptTraceBoxHalfExtentZ;
    
    UPROPERTY(EditAnywhere)
    FRotator DefaultSweptTraceRotation;
    
    UPROPERTY(EditAnywhere)
    FScalableFloat DefaultTraceLength;
    
    UPROPERTY(EditAnywhere)
    FVector DefaultSourceOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ExplicitTraceDirection;
    
    UPROPERTY(EditAnywhere)
    uint8 bComplexTrace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreInstigatorActor: 1;
    
public:
    UTargetingSelectionTask_Trace();

protected:
    UFUNCTION(BlueprintNativeEvent)
    float GetTraceLength(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetTraceDirection(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FRotator GetSweptTraceRotation(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetSweptTraceRadius(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetSweptTraceCapsuleHalfHeight(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSweptTraceBoxHalfExtents(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void GetAdditionalActorsToIgnore(const FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const;
    
};

