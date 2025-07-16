#pragma once
#include "CoreMinimal.h"
#include "UIText_RichTextCustomTag.generated.h"

USTRUCT(BlueprintType)
struct FUIText_RichTextCustomTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharIndexStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharIndexEnd;
    
    LGUI_API FUIText_RichTextCustomTag();
};

