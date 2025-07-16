#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_LinearColor.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_LinearColor : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLinearColor From;
    
    UPROPERTY(EditAnywhere)
    FLinearColor To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_LinearColor();

};

