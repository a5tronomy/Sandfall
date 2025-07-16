#pragma once
#include "CoreMinimal.h"
#include "GameAction_Wrapper.generated.h"

class UGameAction;

USTRUCT(BlueprintType)
struct FGameAction_Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGameAction* GameActionReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGameAction* GameActionInline;
    
    SANDFALL_API FGameAction_Wrapper();
};

