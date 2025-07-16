#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_ArmsData.h"
#include "ETwist_Type_DragonIK.h"
#include "AnimNode_DragonWeaponArmSolver.generated.h"

class UDragonIKWeaponPhysicsComponent;

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonWeaponArmSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UDragonIKWeaponPhysicsComponent* weapon_handler_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Physweapon_Component_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 primary_hand_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETwist_Type_DragonIK arm_twist_axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Let_Arm_Twist_With_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    FVector LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    FVector Upward_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTransform> Debug_Hand_Locations;
    
    FAnimNode_DragonWeaponArmSolver();
};

