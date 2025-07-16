#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StatsArray.h"
#include "CharacterStats.generated.h"

UCLASS(BlueprintType)
class UCharacterStats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName CharacterId;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FStatsArray> Stats;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StatSteps;
    
    UCharacterStats();

    UFUNCTION(BlueprintCallable)
    void TickStats();
    
    UFUNCTION(BlueprintCallable)
    void SetStat(int32 StatId, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void InitStat();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStat(int32 StatId);
    
};

