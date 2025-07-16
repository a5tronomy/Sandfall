#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UITextInputCustomValidation.generated.h"

class UUITextInputComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UUITextInputCustomValidation : public UObject {
    GENERATED_BODY()
public:
    UUITextInputCustomValidation();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveOnValidateInput(UUITextInputComponent* InTextInput, const FString& InString, int32 InIndexOfInsertedChar);
    
};

