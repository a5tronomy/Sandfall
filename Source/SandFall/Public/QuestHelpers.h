#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestObjectiveIdentifier.h"
#include "QuestHelpers.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class SANDFALL_API UQuestHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestHelpers();

    UFUNCTION(BlueprintPure)
    static bool NotEqual_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& A, const FQuestObjectiveIdentifier& B);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& QuestObjectiveIdentifier);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetQuestDataTable();
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetObjectiveDataTable(FName QuestName);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& A, const FQuestObjectiveIdentifier& B);
    
    UFUNCTION(BlueprintPure)
    static FQuestObjectiveIdentifier CreateQuestObjectiveIdentifier(FName QuestName, FName ObjectiveName);
    
    UFUNCTION(BlueprintPure)
    static FName CreateQuestIdentifier(FName QuestName);
    
};

