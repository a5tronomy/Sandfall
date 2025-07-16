#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnHardwareBenchmarkDoneDelegate.h"
#include "SF_RunHardwareBenchmark.generated.h"

class UObject;
class USF_RunHardwareBenchmark;

UCLASS()
class SANDFALL_API USF_RunHardwareBenchmark : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnHardwareBenchmarkDone OnBenchmarkRunCompleted;
    
    USF_RunHardwareBenchmark();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_RunHardwareBenchmark* RunHardwareBenchmarkWithNoAlteration(UObject* WorldContextObject, int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
};

