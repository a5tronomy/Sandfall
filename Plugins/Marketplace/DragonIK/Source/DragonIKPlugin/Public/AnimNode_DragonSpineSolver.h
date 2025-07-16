#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_MultiInput.h"
#include "DragonData_Type2MultiInput.h"
#include "EIKTrace_Type_Plugin.h"
#include "ERefPosePluginEnum.h"
#include "ESolverComplexityPluginEnum.h"
#include "AnimNode_DragonSpineSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonSpineSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_trace_manager_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 solver_identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_type2_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_Type2MultiInput dragon_input_type2_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float shift_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKTrace_Type_Plugin trace_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool line_trace_hit_complex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float trace_interval_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_LOD_Specific_Intervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LOD0_Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LOD1_Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LOD2_Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Trace_Distance_Adapting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Max_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Interval_Velocity_Curve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Interval_Velocity_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Override_Curve_Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float custom_velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Rotate_Around_Translate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESolverComplexityPluginEnum complexity_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Lerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_downward_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_upper_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Anti_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool stabilize_pelvis_legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_UpSlopeStabilization_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_DownSlopeStabilization_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool stabilize_chest_legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_UpSlopeStabilization_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_DownslopeStabilization_Alpha;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Stabilization_Head_Bone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Stabilization_Tail_Bone;
    
    UPROPERTY(EditAnywhere)
    bool Use_Ducking_Feature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Ducking_Trace_Channel;
    
    UPROPERTY(EditAnywhere)
    float Ducking_Limit;
    
    UPROPERTY(EditAnywhere)
    float Pelvis_Crouch_Height;
    
    UPROPERTY(EditAnywhere)
    float Pelvis_Crouch_Rotation_Intensity;
    
    UPROPERTY(EditAnywhere)
    FVector Duck_Pelvis_Trace_Offset;
    
    UPROPERTY(EditAnywhere)
    float Chest_Crouch_Height;
    
    UPROPERTY(EditAnywhere)
    float Chest_Crouch_Rotation_Intensity;
    
    UPROPERTY(EditAnywhere)
    FVector Duck_Chest_Trace_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Slanted_Height_Up_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Slanted_Height_Down_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float dip_multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pelvis_adaptive_gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool reverse_fabrik;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Calculation_To_RefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Slanted_Height_Up_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Slanted_Height_Down_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float chest_side_dip_multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float chest_adaptive_gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Base_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_Base_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_leg_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Dip_Height;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Dip_Height_Chest;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Chest_Height_Multiplier_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float rotation_power_between;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Automatic_Fabrik_Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rotation_Lerp_Speed;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Interpolation_Multiplier_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Influence_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_ForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_UpwardForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Body_Rotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Pelvis_Rotation_Offset_Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_ForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_UpwardForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_SidewardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Chest_Rotation_Offset_Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Full_Extended_Spine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float max_extension_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float min_extension_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float extension_switch_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Work_Outside_PIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Fake_Chest_Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Fake_Pelvis_Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Force_Activation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool accurate_feet_placement;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Accurate_Foot_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_crosshair_trace_also_for_fail_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Only_Root_Solve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Chest_Solve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Overall_PostSolved_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Forward_Direction_Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool flip_forward_and_right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERefPosePluginEnum SolverReferencePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Spine_Feet_Connect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Snake_Joint_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Snake_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_snake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_End_Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Feet_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum_Feet_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    FAnimNode_DragonSpineSolver();
};

