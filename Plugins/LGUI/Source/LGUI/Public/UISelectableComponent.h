#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUISelectableNavigationMode.h"
#include "EUISelectableSelectionState.h"
#include "LGUIComponentReference.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "LGUINavigationInterface.h"
#include "LGUIPointerDownUpInterface.h"
#include "LGUIPointerEnterExitInterface.h"
#include "LGUIPointerSelectDeselectInterface.h"
#include "UISelectableTransitionType.h"
#include "UISelectableComponent.generated.h"

class AUIBaseRenderableActor;
class ULGUISpriteData_BaseObject;
class ULTweener;
class UUISelectableComponent;
class UUISelectableTransitionComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISelectableComponent : public ULGUILifeCycleUIBehaviour, public ILGUIPointerEnterExitInterface, public ILGUIPointerDownUpInterface, public ILGUIPointerSelectDeselectInterface, public ILGUINavigationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseRenderableActor> TransitionActor;
    
    UPROPERTY(EditAnywhere)
    bool AllowEventBubbleUp;
    
    UPROPERTY(EditAnywhere)
    bool bInteractable;
    
    UPROPERTY(EditAnywhere)
    UISelectableTransitionType Transition;
    
    UPROPERTY(Transient)
    ULTweener* TransitionTweener;
    
    UPROPERTY(EditAnywhere)
    FColor NormalColor;
    
    UPROPERTY(EditAnywhere)
    FColor HighlightedColor;
    
    UPROPERTY(EditAnywhere)
    FColor PressedColor;
    
    UPROPERTY(EditAnywhere)
    FColor DisabledColor;
    
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* NormalSprite;
    
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* HighlightedSprite;
    
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* PressedSprite;
    
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* DisabledSprite;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISelectableTransitionComponent> TransitionComp;
    
    UPROPERTY(EditAnywhere)
    bool bCanNavigateHere;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationLeft;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationLeftSpecific;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationRight;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationRightSpecific;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationUp;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationUpSpecific;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationDown;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationDownSpecific;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationNext;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationNextSpecific;
    
    UPROPERTY(EditAnywhere)
    EUISelectableNavigationMode NavigationPrev;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference NavigationPrevSpecific;
    
public:
    UUISelectableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTransitionTarget(AUIBaseRenderableActor* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectionState(EUISelectableSelectionState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedSprite(ULGUISpriteData_BaseObject* NewSprite);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalSprite(ULGUISpriteData_BaseObject* NewSprite);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationUpExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationUp(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRightExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRight(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationPrevExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationPrev(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationNextExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationNext(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationLeftExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationLeft(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDownExplicit(UUISelectableComponent* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDown(EUISelectableNavigationMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedSprite(ULGUISpriteData_BaseObject* NewSprite);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledSprite(ULGUISpriteData_BaseObject* NewSprite);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetCanNavigateHere(bool Value);
    
    UFUNCTION(BlueprintPure)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseRenderableActor* GetTransitionTarget() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableSelectionState GetSelectionState() const;
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetPressedSprite() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetPressedColor() const;
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetNormalSprite() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetNormalColor() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationUpExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationUp() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationRightExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationRight() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationPrevExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationPrev() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationNextExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationNext() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationLeftExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationLeft() const;
    
    UFUNCTION(BlueprintPure)
    UUISelectableComponent* GetNavigationDownExplicit() const;
    
    UFUNCTION(BlueprintPure)
    EUISelectableNavigationMode GetNavigationDown() const;
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetHighlightedSprite() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetHighlightedColor() const;
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetDisabledSprite() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetDisabledColor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanNavigateHere() const;
    

    // Fix for true pure virtual functions not being implemented
};

