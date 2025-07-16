#include "StateTreeGameInstanceSchema.h"
#include "Engine/GameInstance.h"

UStateTreeGameInstanceSchema::UStateTreeGameInstanceSchema() {
    this->ContextGameInstanceClass = UGameInstance::StaticClass();
}


