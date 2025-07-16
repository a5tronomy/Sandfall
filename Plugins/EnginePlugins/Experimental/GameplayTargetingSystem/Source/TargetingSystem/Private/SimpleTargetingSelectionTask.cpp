#include "SimpleTargetingSelectionTask.h"

USimpleTargetingSelectionTask::USimpleTargetingSelectionTask() {
}


bool USimpleTargetingSelectionTask::AddTargetActor(const FTargetingRequestHandle& TargetingHandle, AActor* Actor) const {
    return false;
}

bool USimpleTargetingSelectionTask::AddHitResult(const FTargetingRequestHandle& TargetingHandle, const FHitResult& HitResult) const {
    return false;
}


