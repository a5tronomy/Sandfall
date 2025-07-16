#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioEvent.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    SANDFALL_API FAudioEvent();
};

