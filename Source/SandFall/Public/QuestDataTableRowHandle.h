#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FQuestDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_data;
    
    FQuestDataTableRowHandle();
};

