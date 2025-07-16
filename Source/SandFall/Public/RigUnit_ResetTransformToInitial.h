#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Units/RigUnit.h"
#include "RigVMFunctions/RigVMFunctionDefines.h"
#include "RigUnit_ResetTransformToInitial.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FRigUnit_ResetTransformToInitial : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigVMTransformSpace Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    TArray<FCachedRigElement> CachedIndex;
    
    FRigUnit_ResetTransformToInitial();
};

