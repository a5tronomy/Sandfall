#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ALSComponentAndTransform.h"
#include "ALSMantleAsset.h"
#include "ALSMantleParams.h"
#include "ALSMantleTraceSettings.h"
#include "EALSMantleType.h"
#include "EALSOverlayState.h"
#include "MantleStateChangedSignatureDelegate.h"
#include "ALSMantleComponent.generated.h"

class AALSBaseCharacter;
class UALSDebugComponent;
class UCurveFloat;
class UTimelineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALSV4_CPP_API UALSMantleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMantleStateChangedSignature OnMantleStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTimelineComponent* MantleTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FALSMantleTraceSettings GroundedTraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FALSMantleTraceSettings AutomaticTraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FALSMantleTraceSettings FallingTraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* MantleTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName MantleObjectDetectionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> WalkableSurfaceDetectionChannel;
    
    UPROPERTY(BlueprintReadOnly)
    FALSMantleParams MantleParams;
    
    UPROPERTY(BlueprintReadOnly)
    FALSComponentAndTransform MantleLedgeLS;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform MantleTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform MantleActualStartOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform MantleAnimatedStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AcceptableVelocityWhileMantling;
    
private:
    UPROPERTY()
    AALSBaseCharacter* OwnerCharacter;
    
    UPROPERTY(Instanced)
    UALSDebugComponent* ALSDebugComponent;
    
public:
    UALSMantleComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MantleStart(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOwnerRagdollStateChanged(bool bRagdollState);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerJumpInput();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MantleStart(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType);
    
public:
    UFUNCTION(BlueprintCallable)
    void MantleUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void MantleStart(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType);
    
    UFUNCTION(BlueprintCallable)
    void MantleEnd();
    
    UFUNCTION(BlueprintCallable)
    bool MantleCheck(const FALSMantleTraceSettings& TraceSettings, TEnumAsByte<EDrawDebugTrace::Type> DebugType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FALSMantleAsset GetMantleAsset(EALSMantleType MantleType, EALSOverlayState CurrentOverlayState);
    
};

