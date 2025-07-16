#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "InputCoreTypes.h"
#include "LGUILifeCycleBehaviour.h"
#include "LGUIPointerDownUpInterface.h"
#include "LGUIPointerEnterExitInterface.h"
#include "LGUIPointerScrollInterface.h"
#include "UIWidgetInteraction.generated.h"

class UUIWidget;
class UUIWidgetInteractionManager;
class UWidget;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIWidgetInteraction : public ULGUILifeCycleBehaviour, public ILGUIPointerEnterExitInterface, public ILGUIPointerDownUpInterface, public ILGUIPointerScrollInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAllowEventBubbleUp;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    UUIWidgetInteractionManager* Helper;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VirtualUserIndex;
    
protected:
    UPROPERTY(Transient)
    FHitResult CustomHitResult;
    
    UPROPERTY(Transient)
    FVector2D LocalHitLocation;
    
    UPROPERTY(Transient)
    FVector2D LastLocalHitLocation;
    
    UPROPERTY(Instanced, Transient)
    UUIWidget* WidgetComponent;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetInteractable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetFocusable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetHitTestVisible;
    
public:
    UUIWidgetInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFocus(UWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool SendKeyChar(const FString& Characters, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWheel(float ScrollDelta);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void PressPointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool PressKey(FKey Key, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    bool PressAndReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsOverInteractableWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverHitTestVisibleWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverFocusableWidget() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D Get2DHitLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

