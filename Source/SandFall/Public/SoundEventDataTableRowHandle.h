#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundEventDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FSoundEventDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_data;
    
    FSoundEventDataTableRowHandle();
};

