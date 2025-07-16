#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDialogueTextSceneType.h"
#include "SubtitlesSpeakerData.generated.h"

USTRUCT()
struct FSubtitlesSpeakerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SpeakerCharaEntry;
    
    UPROPERTY(VisibleAnywhere)
    EDialogueTextSceneType SpeakerEntrySceneType;
    
    SANDFALL_API FSubtitlesSpeakerData();
};

