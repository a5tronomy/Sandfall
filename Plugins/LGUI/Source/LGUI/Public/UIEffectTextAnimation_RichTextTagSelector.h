#pragma once
#include "CoreMinimal.h"
#include "UIEffectTextAnimation_Selector.h"
#include "UIEffectTextAnimation_RichTextTagSelector.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RichTextTagSelector : public UUIEffectTextAnimation_Selector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    bool flipDirection;
    
public:
    UUIEffectTextAnimation_RichTextTagSelector();

    UFUNCTION(BlueprintCallable)
    void SetTagName(const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipDirection(bool Value);
    
    UFUNCTION(BlueprintPure)
    FName GetTagName() const;
    
    UFUNCTION(BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlipDirection() const;
    
};

