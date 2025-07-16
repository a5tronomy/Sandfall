#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UFileHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFileHelpers();

    UFUNCTION(BlueprintCallable)
    static bool FindFilesWithRegexPattern(const FString& Directory, TArray<FString>& FoundFiles, const FString& RegexPattern);
    
};

