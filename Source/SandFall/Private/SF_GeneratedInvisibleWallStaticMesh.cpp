#include "SF_GeneratedInvisibleWallStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASF_GeneratedInvisibleWallStaticMesh::ASF_GeneratedInvisibleWallStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
}


