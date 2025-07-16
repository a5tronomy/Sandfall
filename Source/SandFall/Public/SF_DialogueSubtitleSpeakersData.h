#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpeakerProfile.h"
#include "SF_DialogueSubtitleSpeakersData.generated.h"

class UDataTable;
class UStringTable;

UCLASS()
class SANDFALL_API USF_DialogueSubtitleSpeakersData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SubSpeakerData;
    
    UPROPERTY(EditDefaultsOnly)
    UStringTable* ST_CharaNames;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FSpeakerProfile> SpeakerProfiles;
    
public:
    USF_DialogueSubtitleSpeakersData();

};

