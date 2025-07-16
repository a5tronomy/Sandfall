#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXRamp4.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput C;
    
    UPROPERTY()
    FExpressionInput D;
    
    UPROPERTY(EditAnywhere)
    uint8 ConstCoordinate;
    
    UMaterialExpressionMaterialXRamp4();

};

