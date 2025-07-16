#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SF_SubtitlesLineWidget.generated.h"

class URichTextBlock;
class UTextBlock;

UCLASS(EditInlineNew)
class SANDFALL_API USF_SubtitlesLineWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    URichTextBlock* MainSubtitleText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* SpeakerSubtitleText;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<int32> SubtitlesSizeConfig;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSeparateSpeakerNameWithColon;
    
    UPROPERTY(EditDefaultsOnly)
    FText SpeakerFormatWithColon;
    
public:
    USF_SubtitlesLineWidget();

};

