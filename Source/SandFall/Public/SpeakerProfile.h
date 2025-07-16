#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "SpeakerProfile.generated.h"

USTRUCT(BlueprintType)
struct FSpeakerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText SpeakerName;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor ColorProfile;
    
    UPROPERTY(EditDefaultsOnly)
    bool ForceDisplaySubForThisSpeaker;
    
    SANDFALL_API FSpeakerProfile();
};

