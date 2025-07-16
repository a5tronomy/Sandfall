#pragma once
#include "CoreMinimal.h"
#include "ALSTurnInPlaceAsset.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FALSTurnInPlaceAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimatedAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScaleTurnAngle;
    
    ALSV4_CPP_API FALSTurnInPlaceAsset();
};

