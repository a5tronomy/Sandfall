#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Quaternion.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Quaternion : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FQuat From;
    
    UPROPERTY(EditAnywhere)
    FQuat To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Quaternion();

};

