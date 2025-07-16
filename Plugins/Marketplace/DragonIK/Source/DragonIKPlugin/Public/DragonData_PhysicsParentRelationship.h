#pragma once
#include "CoreMinimal.h"
#include "DragonData_PhysicsParentRelationship.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_PhysicsParentRelationship {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName child_bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName parent_bone_name;
    
    DRAGONIKPLUGIN_API FDragonData_PhysicsParentRelationship();
};

