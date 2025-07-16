#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SF_ReferenceCounter.h"
#include "SF_ReferenceCounterWrapper.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API USF_ReferenceCounterWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FSF_ReferenceCounter ReferenceCounter;
    
    USF_ReferenceCounterWrapper();

};

