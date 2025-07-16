#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Units/RigUnit.h"
#include "RigUnit_MetahumanComputeHalfFingers.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FRigUnit_MetahumanComputeHalfFingers : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(Transient)
    TArray<FCachedRigElement> CachedIndex;
    
    UPROPERTY(Transient)
    TArray<FCachedRigElement> CachedParent;
    
    FRigUnit_MetahumanComputeHalfFingers();
};

