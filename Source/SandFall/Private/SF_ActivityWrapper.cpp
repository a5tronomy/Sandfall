#include "SF_ActivityWrapper.h"

USF_ActivityWrapper::USF_ActivityWrapper() {
}

bool USF_ActivityWrapper::IsMappedToActivity(FName QuestID) {
    return false;
}

FString USF_ActivityWrapper::GetSubTaskID(FName TaskName) {
    return TEXT("");
}

TArray<FString> USF_ActivityWrapper::GetAllTasks() {
    return TArray<FString>();
}

FString USF_ActivityWrapper::GetActivityID() {
    return TEXT("");
}


