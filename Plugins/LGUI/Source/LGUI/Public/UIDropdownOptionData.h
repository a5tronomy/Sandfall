#pragma once
#include "CoreMinimal.h"
#include "UIDropdownOptionData.generated.h"

class ULGUISpriteData_BaseObject;

USTRUCT(BlueprintType)
struct FUIDropdownOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULGUISpriteData_BaseObject* Sprite;
    
    LGUI_API FUIDropdownOptionData();
};

