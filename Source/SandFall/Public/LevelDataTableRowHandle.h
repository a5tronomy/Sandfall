#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FLevelDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_data;
    
    FLevelDataTableRowHandle();
};

