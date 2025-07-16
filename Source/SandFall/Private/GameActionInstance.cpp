#include "GameActionInstance.h"

UGameActionInstance::UGameActionInstance() {
    this->GameAction = NULL;
}

bool UGameActionInstance::ShouldTriggerAutoSaveAfterExecution_Implementation() const {
    return false;
}

bool UGameActionInstance::ShouldBlockAutoSaveDuringExecution_Implementation() const {
    return false;
}




