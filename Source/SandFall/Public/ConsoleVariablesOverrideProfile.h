#pragma once
#include "CoreMinimal.h"
#include "ConsoleVariablesOverrideProfile.generated.h"

USTRUCT(BlueprintType)
struct FConsoleVariablesOverrideProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, bool> BoolVariables;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, int32> IntVariables;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, float> FloatVariables;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FString> StringVariables;
    
    SANDFALL_API FConsoleVariablesOverrideProfile();
};

