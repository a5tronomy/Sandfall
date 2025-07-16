#include "UICustomMeshActor.h"
#include "UICustomMesh.h"

AUICustomMeshActor::AUICustomMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUICustomMesh>(TEXT("UICustomMesh"));
    this->UICustomMesh = (UUICustomMesh*)RootComponent;
}

UUICustomMesh* AUICustomMeshActor::GetUICustomMesh() const {
    return NULL;
}


