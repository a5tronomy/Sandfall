#include "TargetingFilterTask_SortByDistance.h"

UTargetingFilterTask_SortByDistance::UTargetingFilterTask_SortByDistance() {
    this->bUseDistanceToNearestBlockingCollider = false;
    this->DistanceToCollisionChannel = ECC_WorldDynamic;
}


