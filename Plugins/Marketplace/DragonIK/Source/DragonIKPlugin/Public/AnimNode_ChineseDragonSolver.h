#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_ChineseDragonBoneInput.h"
#include "DragonData_ChineseDragonBoneRotationOffset.h"
#include "AnimNode_ChineseDragonSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_ChineseDragonSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_ChineseDragonBoneInput Custom_Bone_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Stability_Reference_Bone_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_ChineseDragonBoneRotationOffset Extra_Rotation_Offset_Per_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Extra_Rotation_Offset_Overall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Extra_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Advanced_Strict_Chain_Logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Limit_Z_Solving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Fix_Root_in_Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Continous_Normalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Normalization_Speed;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Normalization_Multiplier_Rel_Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Preserve_Original_Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Test_Ref_Forward_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_Positioning_Calibration_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_AnimBP_Viewport_Output;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Scale_Add_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Rot_Add_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool rotation_relative_to_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Warmup_Logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Initial_Warmup_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Reset_To_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Reset_ON_Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Reset_OFF_Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform CachedEffectorCSTransform;
    
    FAnimNode_ChineseDragonSolver();
};

