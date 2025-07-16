#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "AnimNode_DragonControlBase.h"
#include "AnimNode_DragonFabrikSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TipBone_Input;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Target_Transform;
    
    FAnimNode_DragonFabrikSolver();
};

