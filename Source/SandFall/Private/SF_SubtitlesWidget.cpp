#include "SF_SubtitlesWidget.h"

USF_SubtitlesWidget::USF_SubtitlesWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bOneSubtitleDisplayedAtAllTime = true;
    this->SubLinesContainer = NULL;
}

void USF_SubtitlesWidget::UpdateFromGameUserSettings(const UConfigurableGameUserSettings* Settings) {
}



