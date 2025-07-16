#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "InterchangeAnimationPayLoadKey.generated.h"

USTRUCT(BlueprintType)
struct INTERCHANGENODES_API FInterchangeAnimationPayLoadKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeAnimationPayLoadType Type;
    
    FInterchangeAnimationPayLoadKey();
};

