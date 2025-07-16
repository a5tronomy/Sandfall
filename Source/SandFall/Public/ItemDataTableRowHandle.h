#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FItemDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_data;
    
    FItemDataTableRowHandle();
};

