#pragma once
#include "CoreMinimal.h"
#include "LGUILifeCycleBehaviour.h"
#include "LGUILifeCycleUIBehaviour.generated.h"

class UUIItem;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUILifeCycleUIBehaviour : public ULGUILifeCycleBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> RootUIComp;
    
public:
    ULGUILifeCycleUIBehaviour(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIInteractionStateChanged(bool interactableOrNot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIDimensionsChanged(bool horizontalPositionChanged, bool verticalPositionChanged, bool widthChanged, bool heightChanged);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIChildHierarchyIndexChanged(UUIItem* Child);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIChildDimensionsChanged(UUIItem* Child, bool horizontalPositionChanged, bool verticalPositionChanged, bool widthChanged, bool heightChanged);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIChildAttachmentChanged(UUIItem* Child, bool attachOrDetach);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIChildAcitveInHierarchy(UUIItem* Child, bool ativeOrInactive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIAttachmentChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUIActiveInHierarchy(bool activeOrInactive);
    
public:
    UFUNCTION(BlueprintPure)
    UUIItem* GetRootUIComponent() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetRootComponent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool CheckRootUIComponent() const;
    
};

