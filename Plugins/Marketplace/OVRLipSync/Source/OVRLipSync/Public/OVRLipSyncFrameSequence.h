#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OVRLipSyncFrame.h"
#include "OVRLipSyncFrameSequence.generated.h"

UCLASS()
class OVRLIPSYNC_API UOVRLipSyncFrameSequence : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FOVRLipSyncFrame> FrameSequence;
    
    UOVRLipSyncFrameSequence();

};

