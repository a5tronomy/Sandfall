#pragma once
#include "CoreMinimal.h"
#include "UITextCharProperty.generated.h"

USTRUCT(BlueprintType)
struct FUITextCharProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartVertIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VertCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartTriangleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IndicesCount;
    
    LGUI_API FUITextCharProperty();
};

