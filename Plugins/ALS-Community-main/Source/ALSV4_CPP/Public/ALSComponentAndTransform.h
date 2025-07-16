#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALSComponentAndTransform.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FALSComponentAndTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPrimitiveComponent* Component;
    
    ALSV4_CPP_API FALSComponentAndTransform();
};

