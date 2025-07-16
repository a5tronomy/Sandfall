#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerClickInterface.h"
#include "LGUIToggleDynamicDelegateDelegate.h"
#include "UISelectableComponent.h"
#include "UIToggleTransitionType.h"
#include "UIToggleComponent.generated.h"

class AActor;
class AUIBaseRenderableActor;
class ULTweener;
class UUISelectableTransitionComponent;
class UUIToggleGroupComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIToggleComponent : public UUISelectableComponent, public ILGUIPointerClickInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseRenderableActor> ToggleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIToggleTransitionType ToggleTransition;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISelectableTransitionComponent> ToggleTransitionComp;
    
    UPROPERTY(Transient)
    ULTweener* ToggleTransitionTweener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OnAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor OnColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor OffColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ToggleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OnTransitionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OffTransitionName;
    
    UPROPERTY(EditAnywhere)
    bool IsOn;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> UIToggleGroupActor;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIToggleGroupComponent> GroupComp;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnToggle;
    
public:
    UUIToggleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterToggleEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(bool NewValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleGroup(UUIToggleGroupComponent* InGroupComp);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterToggleEvent(const FLGUIToggleDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetValue() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetToggleGroupActor() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexInGroup() const;
    

    // Fix for true pure virtual functions not being implemented
};

