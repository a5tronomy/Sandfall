#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingScreenData.h"
#include "SF_LoadingScreenWidget.generated.h"

UCLASS(EditInlineNew)
class SANDFALL_API USF_LoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLoadingScreenData LSData;
    
public:
    USF_LoadingScreenWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void StartLoadingScreen(FName LevelLoaded);
    
};

