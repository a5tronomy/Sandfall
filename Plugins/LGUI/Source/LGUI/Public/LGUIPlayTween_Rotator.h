#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Rotator.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Rotator : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRotator From;
    
    UPROPERTY(EditAnywhere)
    FRotator To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Rotator();

};

