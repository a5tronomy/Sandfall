#pragma once
#include "CoreMinimal.h"
#include "OVRLipSyncFrame.generated.h"

USTRUCT(BlueprintType)
struct OVRLIPSYNC_API FOVRLipSyncFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> VisemeScores;
    
    UPROPERTY()
    float LaughterScore;
    
    FOVRLipSyncFrame();
};

