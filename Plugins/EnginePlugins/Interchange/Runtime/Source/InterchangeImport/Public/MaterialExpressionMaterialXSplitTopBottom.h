#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXSplitTopBottom.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Center;
    
    UPROPERTY(EditAnywhere)
    float ConstCenter;
    
    UPROPERTY(EditAnywhere)
    uint8 ConstCoordinate;
    
    UMaterialExpressionMaterialXSplitTopBottom();

};

