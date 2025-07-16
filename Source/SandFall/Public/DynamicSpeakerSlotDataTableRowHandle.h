#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DynamicSpeakerSlotDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FDynamicSpeakerSlotDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_data;
    
    FDynamicSpeakerSlotDataTableRowHandle();
};

