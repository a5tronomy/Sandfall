#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FootCollider.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FFootCollider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    FFootCollider();
};

