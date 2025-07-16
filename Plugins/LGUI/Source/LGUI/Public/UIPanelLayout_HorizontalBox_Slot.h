#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "UIPanelLayoutSlotWithOverrideOrder.h"
#include "UIPanelLayout_HorizontalBox_Slot.generated.h"

UCLASS()
class LGUI_API UUIPanelLayout_HorizontalBox_Slot : public UUIPanelLayoutSlotWithOverrideOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    FSlateChildSize SizeRule;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    UUIPanelLayout_HorizontalBox_Slot();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeRule(const FSlateChildSize& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(const FMargin& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EVerticalAlignment> GetVerticalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    FSlateChildSize GetSizeRule() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment() const;
    
};

