#include "BakedActors.h"

ABakedActors::ABakedActors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ABakedActors::TryDestroyAllBakedActors() {
}

bool ABakedActors::HasAnyBakedActor() const {
    return false;
}

TArray<FTransform> ABakedActors::GetBakedActorTransforms_Implementation() {
    return TArray<FTransform>();
}

FString ABakedActors::GetBakedActorsFolderName_Implementation() {
    return TEXT("");
}


bool ABakedActors::BakeActors() {
    return false;
}


