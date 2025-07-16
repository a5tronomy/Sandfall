#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TargetingTaskSet.h"
#include "TargetingPreset.generated.h"

UCLASS(BlueprintType)
class TARGETINGSYSTEM_API UTargetingPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTargetingTaskSet TargetingTaskSet;
    
    UTargetingPreset();

};

