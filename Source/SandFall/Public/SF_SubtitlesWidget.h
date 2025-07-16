#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "EDialogueTextSceneType.h"
#include "SubLineProfile.h"
#include "Templates/SubclassOf.h"
#include "SF_SubtitlesWidget.generated.h"

class UConfigurableGameUserSettings;
class USF_SubtitlesLineWidget;
class UVerticalBox;
class UVerticalBoxSlot;

UCLASS(EditInlineNew)
class SANDFALL_API USF_SubtitlesWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EDialogueTextSceneType, TSubclassOf<USF_SubtitlesLineWidget>> LinesVisualsAssets;
    
    UPROPERTY(EditDefaultsOnly)
    FText Colon_ST_Entry;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor DefaultColorProfile;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOneSubtitleDisplayedAtAllTime;
    
    UPROPERTY()
    TArray<FSubLineProfile> CurrentShownSubLines;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* SubLinesContainer;
    
public:
    USF_SubtitlesWidget();

    UFUNCTION()
    void UpdateFromGameUserSettings(const UConfigurableGameUserSettings* Settings);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubtitleWidgetCreated_BP(UVerticalBoxSlot* NewSubWidget);
    
};

