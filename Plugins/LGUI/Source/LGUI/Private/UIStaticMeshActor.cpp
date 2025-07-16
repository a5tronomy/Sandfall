#include "UIStaticMeshActor.h"
#include "UIStaticMesh.h"

AUIStaticMeshActor::AUIStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIStaticMesh>(TEXT("UIStaticMeshComponent"));
    this->UIStaticMesh = (UUIStaticMesh*)RootComponent;
}

UUIStaticMesh* AUIStaticMeshActor::GetUIStaticMesh() const {
    return NULL;
}


