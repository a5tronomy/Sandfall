#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "RichTextBlockCustomWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class SANDFALL_API URichTextBlockCustomWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URichTextBlockCustomWidget();

    UFUNCTION(BlueprintCallable)
    void SetParentStyle(FTextBlockStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void SetIDString(const FString& IDString);
    
    UFUNCTION(BlueprintCallable)
    void SetContentText(FText ContentText);
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyUpdateNeeded();
    
    UFUNCTION(BlueprintPure)
    FTextBlockStyle GetParentStyle() const;
    
    UFUNCTION(BlueprintPure)
    FString GetIDString() const;
    
    UFUNCTION(BlueprintPure)
    FText GetContentText() const;
    
};

