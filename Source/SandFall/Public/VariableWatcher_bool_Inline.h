#pragma once
#include "CoreMinimal.h"
#include "VariableWatcher_bool_Inline.generated.h"

class UVariableWatcher_bool;

USTRUCT(BlueprintType)
struct SANDFALL_API FVariableWatcher_bool_Inline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UVariableWatcher_bool* Value;
    
    FVariableWatcher_bool_Inline();
};

