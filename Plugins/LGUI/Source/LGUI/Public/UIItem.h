#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "ELTweenEase.h"
#include "UIAnchorData.h"
#include "UIItem.generated.h"

class ULGUICanvas;
class ULGUICanvasScaler;
class ULTweener;
class UUICanvasGroup;
class UUIItem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIItem : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FUIAnchorData AnchorData;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> ParentUIItem;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUIItem*> UIChildren;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUICanvasGroup> CanvasGroup;
    
    UPROPERTY(EditAnywhere)
    bool bIsUIActive;
    
    UPROPERTY(EditAnywhere)
    int32 hierarchyIndex;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    int32 flattenHierarchyIndex;
    
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString DisplayName;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bRaycastTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<ULGUICanvas> RenderCanvas;
    
    UPROPERTY(Transient)
    uint8 bIsCanvasUIItem: 1;
    
public:
    UUIItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ULTweener* WidthTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* VerticalAnchoredPositionTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    void SetWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAnchorMinMax(FVector2D Value, bool bKeepSize, bool bKeepRelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAnchoredPosition(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTraceChannel(TEnumAsByte<ETraceTypeQuery> InTraceChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeDelta(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRaycastTarget(bool newBool);
    
    UFUNCTION(BlueprintCallable)
    void SetPivot(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUIActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAndVerticalAnchorMinMax(FVector2D MinValue, FVector2D MaxValue, bool bKeepSize, bool bKeepRelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAnchorMinMax(FVector2D Value, bool bKeepSize, bool bKeepRelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAnchoredPosition(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHierarchyIndex(int32 inInt);
    
    UFUNCTION(BlueprintCallable)
    void SetHeight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void SetAsLastHierarchy();
    
    UFUNCTION(BlueprintCallable)
    void SetAsFirstHierarchy();
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorTop(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorMin(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorMax(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorLeft(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchoredPosition(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorData(const FUIAnchorData& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorBottom(float Value);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* PivotTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintPure)
    bool IsWorldSpaceUI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsScreenSpaceOverlayUI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRenderTargetUI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRaycastTarget() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* HorizontalAnchoredPositionTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* HeightTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintPure)
    float GetWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetVerticalAnchoredPosition() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETraceTypeQuery> GetTraceChannel() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSizeDelta() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetRootUIItemInHierarchy() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvas* GetRootCanvas() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvas* GetRenderCanvas() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPivot() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetParentUIItem() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalSpaceTop() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetLocalSpaceRightTopPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalSpaceRight() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetLocalSpaceLeftBottomPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalSpaceLeft() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetLocalSpaceCenter() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalSpaceBottom() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUIActiveSelf() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUIActiveInHierarchy() const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalAnchoredPosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHierarchyIndex() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFlattenHierarchyIndex() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvasScaler* GetCanvasScaler() const;
    
    UFUNCTION(BlueprintPure)
    UUICanvasGroup* GetCanvasGroup() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUIItem*> GetAttachUIChildren() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetAttachUIChild(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetAnchorTop() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnchorRight() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAnchorMin() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAnchorMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnchorLeft() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAnchoredPosition() const;
    
    UFUNCTION(BlueprintPure)
    FUIAnchorData GetAnchorData() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnchorBottom() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* FindChildByDisplayName(const FString& InName, bool IncludeChildren) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUIItem*> FindChildArrayByDisplayName(const FString& InName, bool IncludeChildren) const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AnchorTopTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AnchorRightTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AnchorLeftTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AnchoredPositionTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AnchorBottomTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
};

