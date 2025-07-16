#pragma once
#include "CoreMinimal.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "LGUIToggleGroupDynamicDelegateDelegate.h"
#include "UIToggleGroupComponent.generated.h"

class UUIToggleComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIToggleGroupComponent : public ULGUILifeCycleUIBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, Export, Transient, VisibleAnywhere)
    TWeakObjectPtr<UUIToggleComponent> LastSelect;
    
    UPROPERTY(AdvancedDisplay, Export, Transient, VisibleAnywhere)
    TArray<TWeakObjectPtr<UUIToggleComponent>> ToggleCollection;
    
    UPROPERTY(EditAnywhere)
    bool bAllowNoneSelected;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnToggle;
    
public:
    UUIToggleGroupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterToggleEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelection(UUIToggleComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowNoneSelected(bool InBool);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterToggleEvent(const FLGUIToggleGroupDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintPure)
    int32 GetToggleIndex(const UUIToggleComponent* InComp) const;
    
    UFUNCTION(BlueprintPure)
    UUIToggleComponent* GetToggleByIndex(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    UUIToggleComponent* GetSelectedItem() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowNoneSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
};

