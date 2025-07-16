#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayDebuggerCategory_SandfallGameplay_BlueprintHelper.generated.h"

UCLASS(BlueprintType)
class UGameplayDebuggerCategory_SandfallGameplay_BlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayDebuggerCategory_SandfallGameplay_BlueprintHelper();

    UFUNCTION(BlueprintPure)
    static bool IsGameplayDebugCategoryEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayFrameMessage(const FText _content);
    
};

