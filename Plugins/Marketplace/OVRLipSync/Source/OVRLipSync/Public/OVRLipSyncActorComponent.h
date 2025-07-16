#pragma once
#include "CoreMinimal.h"
#include "OVRLipSyncActorComponentBase.h"
#include "OVRLipSyncProviderKind.h"
#include "OVRLipSyncActorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OVRLIPSYNC_API UOVRLipSyncActorComponent : public UOVRLipSyncActorComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SampleRate;
    
    UPROPERTY(EditAnywhere)
    int32 BufferSize;
    
    UPROPERTY(EditAnywhere)
    OVRLipSyncProviderKind ProviderKind;
    
    UPROPERTY(EditAnywhere)
    bool EnableHardwareAcceleration;
    
    UOVRLipSyncActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION()
    void PermissionCallback(const TArray<FString>& Permissions, const TArray<bool>& GrantResults);
    
protected:
    UFUNCTION()
    void OnVoiceCaptureTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void FeedAudio(const TArray<uint8>& AudioData);
    
};

