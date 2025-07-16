#pragma once
#include "CoreMinimal.h"
#include "OVRLipSyncActorComponentBase.h"
#include "OVRLipSyncPlaybackActorComponent.generated.h"

class UAudioComponent;
class UOVRLipSyncFrameSequence;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OVRLIPSYNC_API UOVRLipSyncPlaybackActorComponent : public UOVRLipSyncActorComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UOVRLipSyncFrameSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* AudioComponent;
    
    UOVRLipSyncPlaybackActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start(UAudioComponent* InAudioComponent, UOVRLipSyncFrameSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSequence(UOVRLipSyncFrameSequence* InSequence);
    
};

