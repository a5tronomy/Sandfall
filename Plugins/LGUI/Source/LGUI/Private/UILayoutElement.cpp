#include "UILayoutElement.h"

UUILayoutElement::UUILayoutElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentLayout = NULL;
    this->LayoutElementType = ELayoutElementType::AutoSize;
    this->ConstantSizeType = EUILayoutElement_ConstantSizeType::UseCustomSize;
    this->ConstantSize = 100.00f;
    this->RatioSize = 0.50f;
}

void UUILayoutElement::SetRatioSize(float Value) {
}

void UUILayoutElement::SetLayoutType(ELayoutElementType InType) {
}

void UUILayoutElement::SetConstantSizeType(EUILayoutElement_ConstantSizeType Value) {
}

void UUILayoutElement::SetConstantSize(float Value) {
}

EUILayoutElement_ConstantSizeType UUILayoutElement::GetConstantSizeType() const {
    return EUILayoutElement_ConstantSizeType::UseUIItemSize;
}


