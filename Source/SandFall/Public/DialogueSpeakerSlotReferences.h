#pragma once
#include "CoreMinimal.h"
#include "DialogueSpeakerSlotReferences.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SANDFALL_API FDialogueSpeakerSlotReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> actorArray;
    
    FDialogueSpeakerSlotReferences();
};

