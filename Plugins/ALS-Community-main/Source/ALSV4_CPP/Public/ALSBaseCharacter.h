#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "ALSBaseCharacterGaitChangedSignatureDelegate.h"
#include "ALSBaseCharacterStanceChangedSignatureDelegate.h"
#include "ALSMovementSettings.h"
#include "ALSMovementStateSettings.h"
#include "EALSGait.h"
#include "EALSGroundedEntryState.h"
#include "EALSMovementAction.h"
#include "EALSMovementState.h"
#include "EALSOverlayState.h"
#include "EALSRotationMode.h"
#include "EALSStance.h"
#include "EALSViewMode.h"
#include "JumpPressedSignatureDelegate.h"
#include "OnJumpedSignatureDelegate.h"
#include "RagdollStateChangedSignatureDelegate.h"
#include "ALSBaseCharacter.generated.h"

class UALSCharacterMovementComponent;
class UALSDebugComponent;
class UALSPlayerCameraBehavior;
class UAnimMontage;
class USkeletalMesh;

UCLASS()
class ALSV4_CPP_API AALSBaseCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJumpPressedSignature JumpPressedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnJumpedSignature OnJumpedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRagdollStateChangedSignature RagdollStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FALSBaseCharacterGaitChangedSignature OnGaitChangedDispatcher;
    
    UPROPERTY(BlueprintAssignable)
    FALSBaseCharacterStanceChangedSignature OnStanceChangedDispatcher;
    
protected:
    UPROPERTY(Instanced)
    UALSCharacterMovementComponent* MyCharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    EALSRotationMode DesiredRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    EALSGait DesiredGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    EALSStance DesiredStance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookUpDownRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookLeftRightRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RollDoubleTapTimeout;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBreakFall;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSprintHeld;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThirdPersonFOV;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FirstPersonFOV;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bRightShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FDataTableRowHandle MovementModel;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasMovementInput;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LastVelocityRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LastMovementInputRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementInputAmount;
    
    UPROPERTY(BlueprintReadOnly)
    float AimYawRate;
    
    UPROPERTY(BlueprintReadOnly)
    float EasedMaxAcceleration;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FVector ReplicatedCurrentAcceleration;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FRotator ReplicatedControlRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_VisibleMesh)
    USkeletalMesh* VisibleMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_OverlayState)
    EALSOverlayState OverlayState;
    
    UPROPERTY(BlueprintReadOnly)
    EALSGroundedEntryState GroundedEntryState;
    
    UPROPERTY(BlueprintReadOnly)
    EALSMovementState MovementState;
    
    UPROPERTY(BlueprintReadOnly)
    EALSMovementState PrevMovementState;
    
    UPROPERTY(BlueprintReadOnly)
    EALSMovementAction MovementAction;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RotationMode)
    EALSRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadOnly)
    EALSGait Gait;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EALSStance Stance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_ViewMode)
    EALSViewMode ViewMode;
    
    UPROPERTY(BlueprintReadOnly)
    int32 OverlayOverrideState;
    
    UPROPERTY(BlueprintReadOnly)
    FALSMovementStateSettings MovementData;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator InAirRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bBreakfallOnLand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BreakfallOnLandVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bReversedPelvis;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bRagdollOnLand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RagdollOnLandVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRagdollOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRagdollFaceUp;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LastRagdollVelocity;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FVector TargetRagdollLocation;
    
    UPROPERTY(BlueprintReadOnly)
    UALSPlayerCameraBehavior* CameraBehavior;
    
private:
    UPROPERTY(Instanced)
    UALSDebugComponent* ALSDebugComponent;
    
public:
    AALSBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WalkAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VelocityDirectionAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StanceAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SprintAction(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleMesh(USkeletalMesh* NewSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetViewMode(EALSViewMode NewViewMode, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetStance(EALSStance NewStance, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationMode(EALSRotationMode NewRotationMode, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetRightShoulder(bool bNewRightShoulder);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayState(EALSOverlayState NewState, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayOverrideState(int32 NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementState(EALSMovementState NewState, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMovementModel(FDataTableRowHandle Model);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMovementAction(EALSMovementAction NewAction, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundedEntryState(EALSGroundedEntryState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetGait(EALSGait NewGait, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredStance(EALSStance NewStance);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRotationMode(EALSRotationMode NewRotMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredGait(EALSGait NewGait);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraBehavior(UALSPlayerCameraBehavior* CamBeh);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocationAndTargetRotation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetVisibleMesh(USkeletalMesh* NewSkeletalMesh);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetViewMode(EALSViewMode NewViewMode, bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRotationMode(EALSRotationMode NewRotationMode, bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetOverlayState(EALSOverlayState NewState, bool bForce);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetMeshLocationDuringRagdoll(FVector MeshLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDesiredStance(EALSStance NewStance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDesiredRotationMode(EALSRotationMode NewRotMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDesiredGait(EALSGait NewGait);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollStart();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollEnd(FVector CharacterLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayMontage(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RightMovementAction(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedRagdollStart();
    
    UFUNCTION(BlueprintCallable)
    void ReplicatedRagdollEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Replicated_PlayMontage(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void RagdollStart();
    
    UFUNCTION(BlueprintCallable)
    void RagdollEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RagdollAction();
    
protected:
    UFUNCTION()
    void OnRep_VisibleMesh(USkeletalMesh* NewVisibleMesh);
    
    UFUNCTION()
    void OnRep_ViewMode(EALSViewMode PrevViewMode);
    
    UFUNCTION()
    void OnRep_RotationMode(EALSRotationMode PrevRotMode);
    
    UFUNCTION()
    void OnRep_OverlayState(EALSOverlayState PrevOverlayState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakfall();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollEnd(FVector CharacterLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayMontage(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnLanded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnJumped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LookingDirectionAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JumpAction(bool bValue);
    
    UFUNCTION(BlueprintPure)
    bool IsRightShoulder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovementInput() const;
    
    UFUNCTION(BlueprintPure)
    EALSViewMode GetViewMode() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ECollisionChannel> GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetThirdPersonPivotTarget();
    
    UFUNCTION(BlueprintPure)
    FALSMovementSettings GetTargetMovementSettings() const;
    
    UFUNCTION(BlueprintPure)
    EALSStance GetStance() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EALSRotationMode GetRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetRollAnimation();
    
    UFUNCTION(BlueprintPure)
    EALSMovementState GetPrevMovementState() const;
    
    UFUNCTION(BlueprintPure)
    EALSOverlayState GetOverlayState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverlayOverrideState() const;
    
    UFUNCTION(BlueprintPure)
    UALSCharacterMovementComponent* GetMyMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    EALSMovementState GetMovementState() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovementInputAmount() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMovementInput() const;
    
    UFUNCTION(BlueprintPure)
    EALSMovementAction GetMovementAction() const;
    
    UFUNCTION(BlueprintPure)
    EALSGroundedEntryState GetGroundedEntryState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetGetUpAnimation(bool bRagdollFaceUpState);
    
    UFUNCTION(BlueprintPure)
    EALSGait GetGait() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetFirstPersonCameraTarget();
    
    UFUNCTION(BlueprintPure)
    EALSStance GetDesiredStance() const;
    
    UFUNCTION(BlueprintPure)
    EALSRotationMode GetDesiredRotationMode() const;
    
    UFUNCTION(BlueprintPure)
    EALSGait GetDesiredGait() const;
    
    UFUNCTION(BlueprintPure)
    void GetCameraParameters(float& TPFOVOut, float& FPFOVOut, bool& bRightShoulderOut) const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimCurveValue(FName CurveName) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EALSGait GetAllowedGait() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimYawRate() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimingRotation() const;
    
    UFUNCTION(BlueprintPure)
    EALSGait GetActualGait(EALSGait AllowedGait) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForwardMovementAction(float Value);
    
    UFUNCTION(BlueprintCallable)
    void EventOnLanded();
    
    UFUNCTION(BlueprintCallable)
    void EventOnJumped();
    
    UFUNCTION(BlueprintPure)
    bool CanSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CameraUpAction(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CameraTapAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CameraRightAction(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CameraHeldAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AimAction(bool bValue);
    
};

