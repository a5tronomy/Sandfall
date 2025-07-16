#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIText_RichTextImageTag.generated.h"

USTRUCT(BlueprintType)
struct FUIText_RichTextImageTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor TintColor;
    
    LGUI_API FUIText_RichTextImageTag();
};

