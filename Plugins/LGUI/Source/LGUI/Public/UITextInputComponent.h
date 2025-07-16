#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
#include "ELGUITextInputDisplayType.h"
#include "ELGUITextInputOverflowType.h"
#include "ELGUITextInputType.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIInputActivateDynamicDelegateDelegate.h"
#include "LGUIPointerClickInterface.h"
#include "LGUIPointerDragInterface.h"
#include "LGUITextInputCustomInputTypeDynamicDelegateDelegate.h"
#include "LGUITextInputDynamicDelegateDelegate.h"
#include "UISelectableComponent.h"
#include "UITextInputComponent.generated.h"

class APlayerController;
class AUIBaseActor;
class AUITextActor;
class ULGUIPointerEventData;
class UUISprite;
class UUIText;
class UUITextInputCustomValidation;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUITextInputComponent : public UUISelectableComponent, public ILGUIPointerClickInterface, public ILGUIPointerDragInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUITextActor> TextActor;
    
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    ELGUITextInputType InputType;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUITextInputCustomValidation* CustomValidation;
    
    UPROPERTY(EditAnywhere)
    ELGUITextInputDisplayType DisplayType;
    
    UPROPERTY(EditAnywhere)
    FString PasswordChar;
    
    UPROPERTY(EditAnywhere)
    bool bAllowMultiLine;
    
    UPROPERTY(EditAnywhere)
    ELGUITextInputOverflowType overflowType;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLineCount;
    
    UPROPERTY(EditAnywhere)
    float MaxLineWidth;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> MultiLineSubmitFunctionKeys;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> PlaceHolderActor;
    
    UPROPERTY(EditAnywhere)
    float CaretBlinkRate;
    
    UPROPERTY(EditAnywhere)
    float CaretWidth;
    
    UPROPERTY(EditAnywhere)
    FColor CaretColor;
    
    UPROPERTY(EditAnywhere)
    FColor SelectionColor;
    
    UPROPERTY(EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboradOptions;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> IgnoreKeys;
    
    UPROPERTY(EditAnywhere)
    bool bAutoActivateInputWhenNavigateIn;
    
    UPROPERTY(EditAnywhere)
    bool bSelectAllWhenActivateInput;
    
    UPROPERTY(EditAnywhere)
    bool bReadOnly;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnValueChange;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnSubmit;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnInputActivate;
    
private:
    UPROPERTY(Transient)
    APlayerController* PlayerController;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISprite> CaretObject;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UUISprite>> SelectionMaskObjectArray;
    
public:
    UUITextInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool VerifyAndInsertStringAtCaretPosition(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterValueChangeEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSubmitEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInputActivateEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION()
    void SetVirtualKeyboradOptions(FVirtualKeyboardOptions Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetText(const FString& InText, bool InFireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectionColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReadOnly(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaceHolderActor(AUIBaseActor* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPasswordChar(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiLineSubmitFunctionKeys(const TArray<FKey>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputType(ELGUITextInputType NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreKeys(const TArray<FKey>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayType(ELGUITextInputDisplayType NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomValidation(UUITextInputCustomValidation* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomInputTypeFunction(const FLGUITextInputCustomInputTypeDynamicDelegate& InFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetCaretWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCaretColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCaretBlinkRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoActivateInputWhenNavigateIn(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowMultiLine(bool Value);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterValueChangeEvent(const FLGUITextInputDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterSubmitEvent(const FLGUITextInputDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterInputActivateEvent(const FLGUIInputActivateDynamicDelegate& InDelegate);
    
    UFUNCTION()
    FVirtualKeyboardOptions GetVirtualKeyboradOptions() const;
    
    UFUNCTION(BlueprintPure)
    UUIText* GetTextComponent() const;
    
    UFUNCTION(BlueprintPure)
    FString GetText() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetSelectionColor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetReadOnly() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetPlaceHolderActor() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPasswordChar() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetMultiLineSubmitFunctionKeys() const;
    
    UFUNCTION(BlueprintPure)
    ELGUITextInputType GetInputType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetIgnoreKeys() const;
    
    UFUNCTION(BlueprintPure)
    ELGUITextInputDisplayType GetDisplayType() const;
    
    UFUNCTION(BlueprintPure)
    UUITextInputCustomValidation* GetCustomValidation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCaretWidth() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetCaretColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetCaretBlinkRate() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAutoActivateInputWhenNavigateIn() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowMultiLine() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInput(bool InFireEvent);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomInputTypeFunction();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInput(ULGUIPointerEventData* EventData);
    

    // Fix for true pure virtual functions not being implemented
};

