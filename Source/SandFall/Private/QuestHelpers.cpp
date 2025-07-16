#include "QuestHelpers.h"

UQuestHelpers::UQuestHelpers() {
}

bool UQuestHelpers::NotEqual_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& A, const FQuestObjectiveIdentifier& B) {
    return false;
}

bool UQuestHelpers::IsValid_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& QuestObjectiveIdentifier) {
    return false;
}

UDataTable* UQuestHelpers::GetQuestDataTable() {
    return NULL;
}

UDataTable* UQuestHelpers::GetObjectiveDataTable(FName QuestName) {
    return NULL;
}

bool UQuestHelpers::Equal_FQuestObjectiveIdentifier(const FQuestObjectiveIdentifier& A, const FQuestObjectiveIdentifier& B) {
    return false;
}

FQuestObjectiveIdentifier UQuestHelpers::CreateQuestObjectiveIdentifier(FName QuestName, FName ObjectiveName) {
    return FQuestObjectiveIdentifier{};
}

FName UQuestHelpers::CreateQuestIdentifier(FName QuestName) {
    return NAME_None;
}


