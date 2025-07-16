#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_FeetAlpha_Struct.h"
#include "DragonData_FeetOffset_Struct.h"
#include "DragonData_MultiInput.h"
#include "DragonData_StickyFeetStruct.h"
#include "DragonData_StickySocketStruct.h"
#include "EIKTrace_Type_Plugin.h"
#include "EIK_Type_Plugin.h"
#include "EInterpoLocation_Type_Plugin.h"
#include "EInterpoRotation_Type_Plugin.h"
#include "AnimNode_DragonFeetSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_trace_manager_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 solver_identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIK_Type_Plugin ik_type;
    
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
    EInterpoLocation_Type_Plugin loc_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpoRotation_Type_Plugin rot_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_FeetAlpha_Struct feet_alpha_multiplier_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_FeetOffset_Struct feet_extra_offset_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Overall_Feet_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool automatic_leg_make;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_OptionalRef_Feet_As_Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Work_Outside_PIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink OptionalRefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool interpolate_only_z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float shift_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float feet_rotation_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ignore_shift_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Lerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Location_Lerping;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Interpolation_Velocity_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Complex_Rotation_Method;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FPS_Lerp_Treshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_upper_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_down_height;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Trace_Down_Multiplier_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Anti_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_footstep_listening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Should_Rotate_Feet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool show_trace_in_game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool execute_in_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_forward_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector poles_forward_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Four_Point_Feets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Foot_Lift_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Affect_Toes_Always;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Finger_Alpha_Velocity_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max_Limb_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Feet_Lift_Warping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Lift_Warp_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float feet_vertical_size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Lift_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool sticky_feet_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float sticky_feet_on_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float sticky_feet_off_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Sticky_Feet_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Lock_Feet_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_StickyFeetStruct sticky_feets_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool sticky_floor_detection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float floor_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Auto_Sticky_Toggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_StickySocketStruct sticky_sockets_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_01_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_02_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_03_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_04_Height_Offset;
    
    FAnimNode_DragonFeetSolver();
};

