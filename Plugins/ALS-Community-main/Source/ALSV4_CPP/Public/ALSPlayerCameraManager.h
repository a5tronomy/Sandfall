#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "ALSPlayerCameraManager.generated.h"

class AALSBaseCharacter;
class UALSDebugComponent;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class ALSV4_CPP_API AALSPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AALSBaseCharacter* ControlledCharacter;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* CameraBehavior;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector RootLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform SmoothedPivotTarget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector PivotLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector TargetCameraLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator TargetCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator DebugViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector DebugViewOffset;
    
private:
    UPROPERTY(Instanced)
    UALSDebugComponent* ALSDebugComponent;
    
public:
    AALSPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPossess(AALSBaseCharacter* NewCharacter);
    
    UFUNCTION(BlueprintPure)
    float GetCameraBehaviorParam(FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDebugTargets(FVector PivotTargetLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CustomCameraBehavior(float DeltaTime, FVector& Location, FRotator& Rotation, float& FOV);
    
    UFUNCTION(BlueprintCallable)
    static FVector CalculateAxisIndependentLag(FVector CurrentLocation, FVector TargetLocation, FRotator CameraRotation, FVector LagSpeeds, float DeltaTime);
    
};

