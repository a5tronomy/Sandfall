#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "RichTextBlockCustomWidgetDecorator.generated.h"

class URichTextBlockCustomWidget;

UCLASS(Abstract)
class SANDFALL_API URichTextBlockCustomWidgetDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<URichTextBlockCustomWidget> CustomWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FString Keyword;
    
    URichTextBlockCustomWidgetDecorator();

};

