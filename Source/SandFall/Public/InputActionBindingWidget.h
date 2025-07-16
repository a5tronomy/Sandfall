#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RichTextBlockCustomWidget.h"
#include "InputActionBindingWidget.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(Abstract, EditInlineNew)
class SANDFALL_API UInputActionBindingWidget : public URichTextBlockCustomWidget {
    GENERATED_BODY()
public:
    UInputActionBindingWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupInputBindingParametersFromExternal(const FName& InLegacyActionName, const FDataTableRowHandle& InCommonUIAction, UInputAction* InEnhancedInputAction, UInputMappingContext* InIMC);
    
};

