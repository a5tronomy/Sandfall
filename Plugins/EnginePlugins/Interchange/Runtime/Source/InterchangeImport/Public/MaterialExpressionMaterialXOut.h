#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXOut.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXOut : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Alpha;
    
    UPROPERTY(EditAnywhere)
    float ConstAlpha;
    
    UMaterialExpressionMaterialXOut();

};

