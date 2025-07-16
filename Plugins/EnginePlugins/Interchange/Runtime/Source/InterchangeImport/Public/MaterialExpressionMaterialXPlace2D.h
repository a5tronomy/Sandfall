#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXPlace2D.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY()
    FExpressionInput Pivot;
    
    UPROPERTY()
    FExpressionInput Scale;
    
    UPROPERTY()
    FExpressionInput Offset;
    
    UPROPERTY()
    FExpressionInput RotationAngle;
    
    UPROPERTY(EditAnywhere)
    float ConstRotationAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 ConstCoordinate;
    
    UMaterialExpressionMaterialXPlace2D();

};

