#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_ArmsData.h"
#include "EPole_System_DragonIK.h"
#include "ERotation_Type_DragonIK.h"
#include "ETwist_Type_DragonIK.h"
#include "AnimNode_DragonTwistArmSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonTwistArmSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_ArmsData Hand_Input_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Target_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Extra_Elbow_Pole_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPole_System_DragonIK pole_system_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETwist_Type_DragonIK arm_twist_axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERotation_Type_DragonIK hand_rotation_method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Let_Arm_Twist_With_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool allow_arm_stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    FVector LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    FVector Upward_Axis;
    
    UPROPERTY(EditAnywhere)
    bool Use_Physics_Adaptation;
    
    UPROPERTY(EditAnywhere)
    FName physics_root_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTransform> Debug_Hand_Locations;
    
    FAnimNode_DragonTwistArmSolver();
};

