#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ALSAnimCharacterInformation.h"
#include "ALSAnimConfiguration.h"
#include "ALSAnimGraphAimingValues.h"
#include "ALSAnimGraphFootIK.h"
#include "ALSAnimGraphGrounded.h"
#include "ALSAnimGraphInAir.h"
#include "ALSAnimGraphLayerBlending.h"
#include "ALSAnimRotateInPlace.h"
#include "ALSAnimTurnInPlace.h"
#include "ALSDynamicMontageParams.h"
#include "ALSGait.h"
#include "ALSGroundedEntryState.h"
#include "ALSLeanAmount.h"
#include "ALSMovementAction.h"
#include "ALSMovementDirection.h"
#include "ALSMovementState.h"
#include "ALSOverlayState.h"
#include "ALSRotationMode.h"
#include "ALSStance.h"
#include "ALSVelocityBlend.h"
#include "EALSGroundedEntryState.h"
#include "EALSHipsDirection.h"
#include "ALSCharacterAnimInstance.generated.h"

class AALSBaseCharacter;
class UALSDebugComponent;
class UAnimSequenceBase;
class UCurveFloat;
class UCurveVector;

UCLASS(NonTransient)
class ALSV4_CPP_API UALSCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AALSBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimCharacterInformation CharacterInformation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSMovementState MovementState;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSMovementAction MovementAction;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSGait Gait;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSStance Stance;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSOverlayState OverlayState;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimGraphGrounded Grounded;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSVelocityBlend VelocityBlend;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSLeanAmount LeanAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector RelativeAccelerationAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSGroundedEntryState GroundedEntryState;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSMovementDirection MovementDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimGraphInAir InAir;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimGraphAimingValues AimingValues;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector2D SmoothedAimingAngle;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FlailRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimGraphLayerBlending LayerBlendingValues;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FALSAnimGraphFootIK FootIKValues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FALSAnimTurnInPlace TurnInPlaceValues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FALSAnimRotateInPlace RotateInPlace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FALSAnimConfiguration Config;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DiagonalScaleAmountCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* StrideBlend_N_Walk;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* StrideBlend_N_Run;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* StrideBlend_C_Walk;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* LandPredictionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* LeanInAirCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* YawOffset_FB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* YawOffset_LR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* TransitionAnim_R;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* TransitionAnim_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IkFootL_BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IkFootR_BoneName;
    
private:
    UPROPERTY(Instanced)
    UALSDebugComponent* ALSDebugComponent;
    
public:
    UALSCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldMoveCheck() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTrackedHipsDirection(EALSHipsDirection HipsDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundedEntryState(EALSGroundedEntryState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayTransitionChecked(const FALSDynamicMontageParams& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void PlayTransition(const FALSDynamicMontageParams& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void PlayDynamicTransition(float ReTriggerDelay, FALSDynamicMontageParams Parameters);
    
    UFUNCTION(BlueprintCallable)
    void OnPivot();
    
    UFUNCTION(BlueprintCallable)
    void OnJumped();
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanTurnInPlace() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRotateInPlace() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDynamicTransition() const;
    
};

