#pragma once
#include "CoreMinimal.h"
#include "DragonIKTraceMParams.h"
#include "DragonIKTraceParamKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FDragonIKTraceParamKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDragonIKTraceMParams trace_params;
    
    DRAGONIKPLUGIN_API FDragonIKTraceParamKeyValuePair();
};

