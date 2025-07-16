#include "SF_SubtitlesLineWidget.h"

USF_SubtitlesLineWidget::USF_SubtitlesLineWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainSubtitleText = NULL;
    this->SpeakerSubtitleText = NULL;
    this->SubtitlesSizeConfig.AddDefaulted(2);
    this->bSeparateSpeakerNameWithColon = true;
}


