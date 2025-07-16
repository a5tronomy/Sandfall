#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMeshPayLoadType.h"
#include "InterchangeMeshPayLoadKey.generated.h"

USTRUCT(BlueprintType)
struct INTERCHANGENODES_API FInterchangeMeshPayLoadKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeMeshPayLoadType Type;
    
    FInterchangeMeshPayLoadKey();
};

