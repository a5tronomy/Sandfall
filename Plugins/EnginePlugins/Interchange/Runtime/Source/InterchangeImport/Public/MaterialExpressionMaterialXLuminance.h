#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "EMaterialXLuminanceMode.h"
#include "MaterialExpressionMaterialXLuminance.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LuminanceFactors;
    
    UPROPERTY(EditAnywhere)
    EMaterialXLuminanceMode LuminanceMode;
    
    UMaterialExpressionMaterialXLuminance();

};

