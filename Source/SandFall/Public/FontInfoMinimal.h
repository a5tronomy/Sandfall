#pragma once
#include "CoreMinimal.h"
#include "FontInfoMinimal.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SANDFALL_API FFontInfoMinimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TypefaceFontName;
    
    FFontInfoMinimal();
};

