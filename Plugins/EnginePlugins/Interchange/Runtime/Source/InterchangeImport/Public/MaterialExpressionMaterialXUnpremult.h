#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXUnpremult.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionMaterialXUnpremult();

};

