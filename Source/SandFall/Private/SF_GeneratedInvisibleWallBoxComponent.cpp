#include "SF_GeneratedInvisibleWallBoxComponent.h"
#include "Components/BoxComponent.h"

ASF_GeneratedInvisibleWallBoxComponent::ASF_GeneratedInvisibleWallBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollisionComponent"));
    this->BoxCollisionComponent = (UBoxComponent*)RootComponent;
}


