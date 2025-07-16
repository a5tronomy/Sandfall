#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_AimSolver_SkeletonInput.h"
#include "DragonData_ArmsData.h"
#include "DragonData_CustomArmLengths.h"
#include "DragonData_CustomLimbClamp.h"
#include "DragonData_ElbowOffset_Struct.h"
#include "DragonData_MultiInput.h"
#include "DragonData_Overrided_Location_Data.h"
#include "EInputTransformSpace_DragonIK.h"
#include "EInterpoLocation_Type_Plugin.h"
#include "EPole_System_DragonIK.h"
#include "ERotation_Type_DragonIK.h"
#include "ETwist_Type_DragonIK.h"
#include "AnimNode_DragonAimSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_FName_Bone_Input;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EndSplineBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference StartSplineBone;
    
    UPROPERTY(EditAnywhere)
    FName Name_EndSpline_Bone;
    
    UPROPERTY(EditAnywhere)
    FName Name_StartSpline_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LookAtLocation;
    
    UPROPERTY(EditAnywhere)
    bool Use_Advanced_Input_Mode;
    
    UPROPERTY(EditAnywhere)
    FDragonData_AimSolver_SkeletonInput Bone_Structure_Precise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Separate_Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Override_Hand_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_head_aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowHandStretching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_ElbowOffset_Struct Extra_Struct_Elbow_Pole_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool reach_instead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Aggregate_Hand_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Let_Arm_Twist_With_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPole_System_DragonIK pole_system_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETwist_Type_DragonIK arm_twist_axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERotation_Type_DragonIK hand_rotation_method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Override_Head_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Hand_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Hand_Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_CustomArmLengths custom_arm_lengths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInputTransformSpace_DragonIK arm_transform_space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Main_Arm_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Lookat_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Inner_Body_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Lookat_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Limbs_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_CustomLimbClamp Per_Limbs_Clamp_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Extra_Aiming_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Downward_Dip_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Inverted_Dip_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Vertical_Dip_Treshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side_Move_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side_Down_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Up_Rot_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Verticle_Range_Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Horizontal_Range_Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Aim_Frontal_Offset;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Look_Bending_Curve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Look_Multiplier_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInputTransformSpace_DragonIK look_transform_space;
    
    UPROPERTY(EditAnywhere)
    bool Lock_Legs;
    
    UPROPERTY(EditAnywhere)
    bool ignore_elbow_modification;
    
    UPROPERTY(EditAnywhere)
    bool ignore_separate_hand_solving;
    
    UPROPERTY(EditAnywhere)
    bool Use_Natural_Method;
    
    UPROPERTY(EditAnywhere)
    bool Head_Use_Separate_Clamp;
    
    UPROPERTY(EditAnywhere)
    bool Is_Head_Accurate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool automatic_leg_make;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Work_Outside_PIE;
    
    UPROPERTY(EditAnywhere)
    bool Use_Physics_Adaptation;
    
    UPROPERTY(EditAnywhere)
    FName physics_root_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Adaptive_Terrain_Tail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Up_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Down_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpoLocation_Type_Plugin loc_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Toggle_Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    FVector LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    FVector Upward_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(EditAnywhere)
    bool Use_Reference_Forward_Axis;
    
    UPROPERTY(EditAnywhere)
    FVector Reference_Constant_Forward_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    UPROPERTY(EditAnywhere)
    FTransform Debug_LookAtLocation;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTransform> Debug_Hand_Locations;
    
    FAnimNode_DragonAimSolver();
};

