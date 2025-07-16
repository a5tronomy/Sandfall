#pragma once
#include "CoreMinimal.h"
#include "SF_ModifierStackWrapper.generated.h"

class UModifierStack_Float;

USTRUCT(BlueprintType)
struct SANDFALL_API FSF_ModifierStackWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UModifierStack_Float* Stack;
    
    FSF_ModifierStackWrapper();
};

