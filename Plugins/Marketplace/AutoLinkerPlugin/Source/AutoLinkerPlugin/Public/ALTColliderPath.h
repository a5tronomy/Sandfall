#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALTLinkReduced.h"
#include "ALTColliderPath.generated.h"

USTRUCT(BlueprintType)
struct FALTColliderPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite)
    FVector End;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FALTLinkReduced> linkInside;
    
    AUTOLINKERPLUGIN_API FALTColliderPath();
};

