#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_WarpLimbsData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_WarpLimbsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Foot_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FName Knee_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FName Thigh_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    float Warp_Lift_Reference_Location;
    
    UPROPERTY(EditAnywhere)
    float Warp_Param_Adder;
    
    UPROPERTY(EditAnywhere)
    FVector2D Min_Max_Warp;
    
    UPROPERTY(EditAnywhere)
    float max_extra_compression_height;
    
    DRAGONIKPLUGIN_API FDragonData_WarpLimbsData();
};

