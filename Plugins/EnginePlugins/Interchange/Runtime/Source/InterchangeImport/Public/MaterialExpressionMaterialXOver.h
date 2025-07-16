#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXOver.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXOver : public UMaterialExpression {
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
    
    UMaterialExpressionMaterialXOver();

};

