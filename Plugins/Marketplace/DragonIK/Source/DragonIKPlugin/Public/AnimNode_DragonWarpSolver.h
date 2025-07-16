#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_WarpLimbsData.h"
#include "AnimNode_DragonWarpSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_WarpLimbsData> dragon_limb_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Hip_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector forward_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float speed_warping_const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_slope_warp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float automatic_speed_warping_const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float slope_detection_tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Warp_Slope_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_downward_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_upper_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_leg_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Limb_Compression_Intensity;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Limb_Lifting_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Hip_Change_Intensity;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Hip_Lifting_Curve;
    
    FAnimNode_DragonWarpSolver();
};

