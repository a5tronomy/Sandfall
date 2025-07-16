#include "RichTextBlockCustomWidget.h"

URichTextBlockCustomWidget::URichTextBlockCustomWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void URichTextBlockCustomWidget::SetParentStyle(FTextBlockStyle Style) {
}

void URichTextBlockCustomWidget::SetIDString(const FString& IDString) {
}

void URichTextBlockCustomWidget::SetContentText(FText ContentText) {
}

void URichTextBlockCustomWidget::NotifyUpdateNeeded_Implementation() {
}

FTextBlockStyle URichTextBlockCustomWidget::GetParentStyle() const {
    return FTextBlockStyle{};
}

FString URichTextBlockCustomWidget::GetIDString() const {
    return TEXT("");
}

FText URichTextBlockCustomWidget::GetContentText() const {
    return FText::GetEmpty();
}


