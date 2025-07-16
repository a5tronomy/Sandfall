#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Vector2.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Vector2 : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector2D From;
    
    UPROPERTY(EditAnywhere)
    FVector2D To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Vector2();

};

