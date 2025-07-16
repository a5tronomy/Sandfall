#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXRemap.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXRemap : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY()
    FExpressionInput InputLow;
    
    UPROPERTY()
    FExpressionInput InputHigh;
    
    UPROPERTY()
    FExpressionInput TargetLow;
    
    UPROPERTY()
    FExpressionInput TargetHigh;
    
    UPROPERTY(EditAnywhere)
    float InputLowDefault;
    
    UPROPERTY(EditAnywhere)
    float InputHighDefault;
    
    UPROPERTY(EditAnywhere)
    float TargetLowDefault;
    
    UPROPERTY(EditAnywhere)
    float TargetHighDefault;
    
    UMaterialExpressionMaterialXRemap();

};

