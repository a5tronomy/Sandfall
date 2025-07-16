#pragma once
#include "CoreMinimal.h"
#include "RichTextBlockCustomWidgetDecorator.h"
#include "RichTextBlockInputDecorator.generated.h"

class UDataTable;

UCLASS(Abstract)
class SANDFALL_API URichTextBlockInputDecorator : public URichTextBlockCustomWidgetDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* CommonInputActionDataTable;
    
public:
    URichTextBlockInputDecorator();

};

