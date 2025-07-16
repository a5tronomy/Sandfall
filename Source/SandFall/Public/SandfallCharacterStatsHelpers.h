#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnCharacterStatUpdateDelegate.h"
#include "SandfallCharacterStatsHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API USandfallCharacterStatsHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USandfallCharacterStatsHelpers();

    UFUNCTION(BlueprintCallable)
    static void RegisterStats(FName CharacterId, FOnCharacterStatUpdate StatCallback);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, int32> GetBaseStatValues();
    
};

