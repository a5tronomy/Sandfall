#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "UIPanelLayoutSlotBase.h"
#include "UIPanelLayout_FlexibleGrid_Slot.generated.h"

UCLASS()
class LGUI_API UUIPanelLayout_FlexibleGrid_Slot : public UUIPanelLayoutSlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    int32 Column;
    
    UPROPERTY(EditAnywhere)
    int32 ColumnSpan;
    
    UPROPERTY(EditAnywhere)
    int32 Row;
    
    UPROPERTY(EditAnywhere)
    int32 RowSpan;
    
public:
    UUIPanelLayout_FlexibleGrid_Slot();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRowSpan(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRow(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(const FMargin& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnSpan(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumn(int32 Value);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EVerticalAlignment> GetVerticalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRowSpan() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRow() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumnSpan() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumn() const;
    
};

