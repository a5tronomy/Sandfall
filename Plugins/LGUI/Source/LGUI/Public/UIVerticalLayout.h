#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ELGUILayoutAlignmentType.h"
#include "UILayoutWithChildren.h"
#include "UIVerticalLayout.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIVerticalLayout : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    float Spacing;
    
    UPROPERTY(EditAnywhere)
    ELGUILayoutAlignmentType Align;
    
    UPROPERTY(EditAnywhere)
    bool ControlChildWidth;
    
    UPROPERTY(EditAnywhere)
    bool ControlChildHeight;
    
    UPROPERTY(EditAnywhere)
    bool ExpandChildWidthArea;
    
    UPROPERTY(EditAnywhere)
    bool ExpandChildHeightArea;
    
    UPROPERTY(EditAnywhere)
    bool HeightFitToChildren;
    
    UPROPERTY(EditAnywhere)
    bool WidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float WidthFitToChildrenFromMinToMax;
    
    UPROPERTY(EditAnywhere)
    bool UseChildScaleOnHeight;
    
public:
    UUIVerticalLayout(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildrenFromMinToMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUseChildScaleOnHeight(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpacing(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExpendChildrenWidth(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExpendChildrenHeight(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExpandChildWidthArea(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExpandChildHeightArea(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlChildWidth(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlChildHeight(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAlign(ELGUILayoutAlignmentType Value);
    
    UFUNCTION(BlueprintPure)
    float GetWidthFitToChildrenFromMinToMax() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseChildScaleOnHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpacing() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeightFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExpendChildrenWidth() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExpendChildrenHeight() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExpandChildWidthArea() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExpandChildHeightArea() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControlChildWidth() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControlChildHeight() const;
    
    UFUNCTION(BlueprintPure)
    ELGUILayoutAlignmentType GetAlign() const;
    
    UFUNCTION(BlueprintPure)
    float GetActuralRange() const;
    
};

