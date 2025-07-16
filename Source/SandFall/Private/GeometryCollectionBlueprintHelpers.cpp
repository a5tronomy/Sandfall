#include "GeometryCollectionBlueprintHelpers.h"
#include "Templates/SubclassOf.h"

UGeometryCollectionBlueprintHelpers::UGeometryCollectionBlueprintHelpers() {
}

void UGeometryCollectionBlueprintHelpers::SpawnGeometryCollectionWithRestCollection(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, UGeometryCollection* InRestCollection, FTransform InTransform) {
}

UGeometryCollectionComponent* UGeometryCollectionBlueprintHelpers::SpawnGeometryCollectionComponentWithRestCollection(AActor* OwnerActor, UGeometryCollection* InRestCollection, FTransform InTransform) {
    return NULL;
}

void UGeometryCollectionBlueprintHelpers::SetCollisionResponseToChannel(UGeometryCollectionComponent* GeometryCollectionComponent, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}

void UGeometryCollectionBlueprintHelpers::RecreatePhysicsState(UActorComponent* Component) {
}

TArray<UMaterialInterface*> UGeometryCollectionBlueprintHelpers::GetGeometryCollectionMaterials(UGeometryCollection* GeometryCollection) {
    return TArray<UMaterialInterface*>();
}


