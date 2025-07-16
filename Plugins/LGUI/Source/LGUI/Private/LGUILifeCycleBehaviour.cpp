#include "LGUILifeCycleBehaviour.h"

ULGUILifeCycleBehaviour::ULGUILifeCycleBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enable = true;
}

void ULGUILifeCycleBehaviour::SetEnable(bool Value) {
}

void ULGUILifeCycleBehaviour::SetCanExecuteUpdate(bool Value) {
}







AActor* ULGUILifeCycleBehaviour::InstantiatePrefabWithTransform(ULGUIPrefab* OriginObject, USceneComponent* Parent, FVector Location, FRotator Rotation, FVector Scale) {
    return NULL;
}

AActor* ULGUILifeCycleBehaviour::InstantiatePrefab(ULGUIPrefab* OriginObject, USceneComponent* Parent) {
    return NULL;
}

AActor* ULGUILifeCycleBehaviour::InstantiateActor(AActor* OriginObject, USceneComponent* Parent) {
    return NULL;
}

USceneComponent* ULGUILifeCycleBehaviour::GetRootSceneComponent() const {
    return NULL;
}

bool ULGUILifeCycleBehaviour::GetIsActiveAndEnable() const {
    return false;
}

bool ULGUILifeCycleBehaviour::GetEnable() const {
    return false;
}


