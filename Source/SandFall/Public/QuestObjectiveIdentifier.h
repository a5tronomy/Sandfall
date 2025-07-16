#pragma once
#include "CoreMinimal.h"
#include "QuestObjectiveIdentifier.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FQuestObjectiveIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ObjectiveName;
    
    FQuestObjectiveIdentifier();
};

