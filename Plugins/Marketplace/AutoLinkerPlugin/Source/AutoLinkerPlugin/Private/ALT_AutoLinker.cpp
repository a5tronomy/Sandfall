#include "ALT_AutoLinker.h"
#include "Components/SceneComponent.h"

AALT_AutoLinker::AALT_AutoLinker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->areLinkSpawned = false;
    this->linker = NULL;
    this->linkerUp = NULL;
    this->World = NULL;
    this->isDone = false;
    this->navSystem = NULL;
    this->step = 50;
    this->entityMaxHeight = 200;
    this->entityMaxRadius = 50;
    this->minFallHeight = 70;
    this->maxFallHeight = 2000;
    this->minJumpHeight = 70;
    this->maxJumpHeight = 150;
    this->receptionPointDistFromLedge = 200;
    this->blockingWallMinHeight = 50;
    this->_navLinkToSpawn = NULL;
    this->doBridges = true;
    this->bridgesDeltaHeight = 100;
    this->bridgesMaxLength = 500;
    this->canDebug = true;
}

FVector AALT_AutoLinker::GetDirection2D(const FVector& _start, const FVector& _end) {
    return FVector{};
}

void AALT_AutoLinker::GenerateLinks() {
}

void AALT_AutoLinker::GenerateLink() {
}

void AALT_AutoLinker::ClearLink() {
}


