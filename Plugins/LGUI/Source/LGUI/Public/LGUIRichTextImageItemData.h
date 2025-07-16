#pragma once
#include "CoreMinimal.h"
#include "LGUIRichTextImageItemData.generated.h"

class ULGUISpriteData_BaseObject;

USTRUCT(BlueprintType)
struct FLGUIRichTextImageItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ULGUISpriteData_BaseObject*> Frames;
    
    UPROPERTY(EditAnywhere)
    float overrideAnimationFps;
    
    LGUI_API FLGUIRichTextImageItemData();
};

