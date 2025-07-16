#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UGameplayTagHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayTagHelpers();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetGameplayTagFromString(const FString& TagName);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetGameplayTagFromName(FName TagName);
    
};

