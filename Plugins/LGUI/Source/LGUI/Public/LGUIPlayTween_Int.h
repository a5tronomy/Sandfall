#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Int.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Int : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 From;
    
    UPROPERTY(EditAnywhere)
    int32 To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Int();

};

