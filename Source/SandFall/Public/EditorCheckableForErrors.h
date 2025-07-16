#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EditorCheckableForErrors.generated.h"

UINTERFACE(Blueprintable)
class SANDFALL_API UEditorCheckableForErrors : public UInterface {
    GENERATED_BODY()
};

class SANDFALL_API IEditorCheckableForErrors : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckForErrors(UPARAM(Ref) TArray<FText>& ErrorMessages);
    
};

