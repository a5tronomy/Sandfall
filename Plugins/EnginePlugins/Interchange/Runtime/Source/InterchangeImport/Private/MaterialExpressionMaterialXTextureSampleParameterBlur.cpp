#include "MaterialExpressionMaterialXTextureSampleParameterBlur.h"

UMaterialExpressionMaterialXTextureSampleParameterBlur::UMaterialExpressionMaterialXTextureSampleParameterBlur() {
    this->KernelSize = EMAterialXTextureSampleBlurKernel::Kernel1;
    this->FilterSize = 1.00f;
    this->FilterOffset = 0.00f;
    this->Filter = EMaterialXTextureSampleBlurFilter::Gaussian;
}


