#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_TailBoneInput.h"
#include "DragonData_TailHeightInput.h"
#include "AnimNode_TailSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_TailSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HowToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_TailBoneInput Custom_Bone_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_custom_heights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Tail_Bone_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_TailHeightInput Custom_Bone_Heights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Animation_Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool line_trace_hit_complex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Sphere_Trace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Sphere_Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Up_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Down_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceBlock_Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceUnBlock_Interpolation_Speed;
    
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
    FTransform CachedEffectorCSTransform;
    
    FAnimNode_TailSolver();
};

