#pragma once
#include "CoreMinimal.h"
#include "EUIDropdownHorizontalPosition.h"
#include "EUIDropdownVerticalPosition.h"
#include "LGUIComponentReference.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerClickInterface.h"
#include "UIDropdownComponentDynamicDelegateDelegate.h"
#include "UIDropdownComponentDynamicDelegate_SetItemCustomDataDelegate.h"
#include "UIDropdownOptionData.h"
#include "UISelectableComponent.h"
#include "UIDropdownComponent.generated.h"

class AUIBaseActor;
class AUISpriteActor;
class AUITextActor;
class UUIDropdownItemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIDropdownComponent : public UUISelectableComponent, public ILGUIPointerClickInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> ListRoot;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUITextActor> CaptionText;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUISpriteActor> CaptionSprite;
    
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference ItemTemplate;
    
    UPROPERTY(EditAnywhere)
    EUIDropdownVerticalPosition VerticalPosition;
    
    UPROPERTY(EditAnywhere)
    bool VerticalOverlap;
    
    UPROPERTY(EditAnywhere)
    EUIDropdownHorizontalPosition HorizontalPosition;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    TArray<FUIDropdownOptionData> Options;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseInteractionBlock;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UUIDropdownItemComponent>> CreatedItemArray;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnSelectionChange;
    
public:
    UUIDropdownComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSelectionChangeEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalPosition(EUIDropdownVerticalPosition InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalOverlap(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetUseInteractionBlock(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FUIDropdownOptionData>& InOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetItemCustomDataFunction(const FUIDropdownComponentDynamicDelegate_SetItemCustomData& InFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalPosition(EUIDropdownHorizontalPosition InValue);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterSelectionChangeEvent(const FUIDropdownComponentDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecreateList();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintPure)
    EUIDropdownVerticalPosition GetVerticalPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVerticalOverlap() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseInteractionBlock() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIDropdownOptionData> GetOptions() const;
    
    UFUNCTION(BlueprintPure)
    FUIDropdownOptionData GetOption(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHeight() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetListRoot() const;
    
    UFUNCTION(BlueprintPure)
    EUIDropdownHorizontalPosition GetHorizontalPosition() const;
    
    UFUNCTION(BlueprintPure)
    FUIDropdownOptionData GetCurrentOption() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearItemCustomDataFunction();
    
    UFUNCTION(BlueprintCallable)
    void AddOptions(const TArray<FUIDropdownOptionData>& InOptions);
    

    // Fix for true pure virtual functions not being implemented
};

