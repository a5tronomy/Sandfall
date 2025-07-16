#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Vector3.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Vector3 : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector From;
    
    UPROPERTY(EditAnywhere)
    FVector To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Vector3();

};

