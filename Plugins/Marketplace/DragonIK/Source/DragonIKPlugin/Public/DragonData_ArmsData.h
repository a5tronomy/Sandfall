#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "DragonData_ArmsData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ArmsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Clavicle_Bone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Shoulder_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Elbow_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Hand_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    bool is_this_right_hand;
    
    UPROPERTY(EditAnywhere)
    bool invert_lower_twist;
    
    UPROPERTY(EditAnywhere)
    bool invert_upper_twist;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Twist_Forearm_Bone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Twist_Shoulder_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Local_Direction_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Arm_Aiming_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool accurate_hand_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool relative_axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum_Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max_Stretch_Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stretch_lower_arm_Priorty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Elbow_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector North_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector South_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector West_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector East_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool override_limits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Max_Arm_H_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Max_Arm_V_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Inner_Clavicle_Side_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Inner_Clavicle_Vertical_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Outer_Clavicle_Side_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Outer_Clavicle_Vertical_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Shoulder_Inner_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Shoulder_Outer_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ForeArm_Angle_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Twist_Offset_Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool should_shoulder_twist_if_inward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool clavicle_part_of_extension;
    
    DRAGONIKPLUGIN_API FDragonData_ArmsData();
};

