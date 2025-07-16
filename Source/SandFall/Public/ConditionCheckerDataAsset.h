#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionChecker_Wrapper.h"
#include "ConditionCheckerDataAsset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SANDFALL_API UConditionCheckerDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FConditionChecker_Wrapper ConditionCheckerWrapper;
    
    UConditionCheckerDataAsset();

};

