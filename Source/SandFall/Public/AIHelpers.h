#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIHelpers.generated.h"

class UBrainComponent;

UCLASS(BlueprintType)
class SANDFALL_API UAIHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIHelpers();

    UFUNCTION(BlueprintCallable)
    static void ResumeLogic(UBrainComponent* BrainComponent, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    static void PauseLogic(UBrainComponent* BrainComponent, const FString& DebugReason);
    
};

