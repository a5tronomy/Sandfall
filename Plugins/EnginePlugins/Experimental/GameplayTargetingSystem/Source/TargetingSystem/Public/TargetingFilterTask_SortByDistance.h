#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TargetingSortTask_Base.h"
#include "TargetingFilterTask_SortByDistance.generated.h"

UCLASS(EditInlineNew)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseDistanceToNearestBlockingCollider;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> DistanceToCollisionChannel;
    
public:
    UTargetingFilterTask_SortByDistance();

};

