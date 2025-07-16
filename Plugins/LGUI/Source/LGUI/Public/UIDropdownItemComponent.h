#pragma once
#include "CoreMinimal.h"
#include "LGUIComponentReference.h"
#include "LGUILifeCycleBehaviour.h"
#include "LGUIPointerClickInterface.h"
#include "UIDropdownItem_OnSelectDelegate.h"
#include "UIDropdownOptionData.h"
#include "UIDropdownItemComponent.generated.h"

class AUISpriteActor;
class AUITextActor;
class UUIToggleComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIDropdownItemComponent : public ULGUILifeCycleBehaviour, public ILGUIPointerClickInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUITextActor> TextActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUISpriteActor> SpriteActor;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference Toggle;
    
private:
    UPROPERTY()
    FUIDropdownItem_OnSelect OnSelectDynamic;
    
public:
    UUIDropdownItemComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSetSelectionState(bool InSelect);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInit(int32 Index, const FUIDropdownOptionData& Data, const FUIDropdownItem_OnSelect& OnSelectCallback);
    
public:
    UFUNCTION(BlueprintPure)
    UUIToggleComponent* GetToggle() const;
    
    UFUNCTION(BlueprintPure)
    AUITextActor* GetTextActor() const;
    
    UFUNCTION(BlueprintPure)
    AUISpriteActor* GetSpriteActor() const;
    
private:
    UFUNCTION()
    void DynamicDelegate_OnSelect();
    

    // Fix for true pure virtual functions not being implemented
};

