#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "ELGUILayoutAlignmentType.h"
#include "UILayoutWithChildren.h"
#include "UIGridLayout.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIGridLayout : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    FVector2D Spacing;
    
    UPROPERTY(EditAnywhere)
    ELGUILayoutAlignmentType Align;
    
    UPROPERTY(EditAnywhere)
    bool LastLineCanAlign;
    
    UPROPERTY(EditAnywhere)
    bool HorizontalOrVertical;
    
    UPROPERTY(EditAnywhere)
    bool DependOnSizeOrCount;
    
    UPROPERTY(EditAnywhere)
    bool ExpendChildSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D CellSize;
    
    UPROPERTY(EditAnywhere)
    uint32 LineCount;
    
    UPROPERTY(EditAnywhere)
    bool WidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    bool HeightFitToChildren;
    
public:
    UUIGridLayout(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpacing(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxItemCountInOneLine(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLastLineCanAlign(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalOrVertical(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExpendChildSize(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDependOnSizeOrCount(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCellSize(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAlign(ELGUILayoutAlignmentType Value);
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSpacing() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxItemCountInOneLine() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLastLineCanAlign() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHorizontalOrVertical() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeightFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExpendChildSize() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDependOnSizeOrCount() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCellSize() const;
    
    UFUNCTION(BlueprintPure)
    ELGUILayoutAlignmentType GetAlign() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetActuralRange() const;
    
};

