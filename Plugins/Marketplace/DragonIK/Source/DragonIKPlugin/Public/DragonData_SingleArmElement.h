#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_SingleArmElement.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_SingleArmElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Overrided_Arm_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Arm_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator rotation_offset;
    
    DRAGONIKPLUGIN_API FDragonData_SingleArmElement();
};

