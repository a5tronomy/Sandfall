#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_FingerData.h"
#include "DragonData_FootData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Feet_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Knee_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Second_Knee_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Thigh_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Feet_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Fixed_Pole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Knee_Direction_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Feet_Trace_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Front_Trace_Point_Spacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side_Traces_Spacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Rotation_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Fixed_Foot_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Heights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min_Feet_Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max_Feet_Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Upslope_Offset_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Downslope_Offset_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Slope_Offset_Clamp_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max_Feet_Lift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Overrided_Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FeetFollowBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_FingerData> Finger_Array;
    
    DRAGONIKPLUGIN_API FDragonData_FootData();
};

