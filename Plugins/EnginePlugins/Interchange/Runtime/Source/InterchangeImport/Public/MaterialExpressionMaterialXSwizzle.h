#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXSwizzle.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    FString Channels;
    
    UMaterialExpressionMaterialXSwizzle();

};

