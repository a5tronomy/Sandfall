#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXRotate2D.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY()
    FExpressionInput RotationAngle;
    
    UPROPERTY(EditAnywhere)
    float ConstRotationAngle;
    
    UMaterialExpressionMaterialXRotate2D();

};

