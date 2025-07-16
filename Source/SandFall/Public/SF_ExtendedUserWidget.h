#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SF_ExtendedUserWidget.generated.h"

UCLASS(EditInlineNew)
class SANDFALL_API USF_ExtendedUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USF_ExtendedUserWidget();

    UFUNCTION(BlueprintNativeEvent)
    void OnSynchronizeProperties();
    
};

