#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTween.h"
#include "LGUIPlayTween_Vector4.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIPlayTween_Vector4 : public ULGUIPlayTween {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector4 From;
    
    UPROPERTY(EditAnywhere)
    FVector4 To;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateValue;
    
public:
    ULGUIPlayTween_Vector4();

};

