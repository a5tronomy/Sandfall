#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "EMAterialXTextureSampleBlurKernel.h"
#include "EMaterialXTextureSampleBlurFilter.h"
#include "MaterialExpressionMaterialXTextureSampleParameterBlur.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMAterialXTextureSampleBlurKernel KernelSize;
    
    UPROPERTY(EditAnywhere)
    float FilterSize;
    
    UPROPERTY(EditAnywhere)
    float FilterOffset;
    
    UPROPERTY(EditAnywhere)
    EMaterialXTextureSampleBlurFilter Filter;
    
    UMaterialExpressionMaterialXTextureSampleParameterBlur();

};

