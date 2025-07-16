#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActivityTask.h"
#include "SF_ActivityWrapper.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API USF_ActivityWrapper : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FString ActivityID;
    
    UPROPERTY(EditDefaultsOnly)
    FName MappedToQuestID;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FActivityTask> ActivityTasks;
    
public:
    USF_ActivityWrapper();

    UFUNCTION(BlueprintPure)
    bool IsMappedToActivity(FName QuestID);
    
    UFUNCTION(BlueprintPure)
    FString GetSubTaskID(FName TaskName);
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetAllTasks();
    
    UFUNCTION(BlueprintPure)
    FString GetActivityID();
    
};

