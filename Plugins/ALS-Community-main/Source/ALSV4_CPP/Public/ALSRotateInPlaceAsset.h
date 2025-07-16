#pragma once
#include "CoreMinimal.h"
#include "ALSRotateInPlaceAsset.generated.h"

class UAnimSequenceBase;

USTRUCT()
struct FALSRotateInPlaceAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere)
    float SlowTurnRate;
    
    UPROPERTY(EditAnywhere)
    float FastTurnRate;
    
    UPROPERTY(EditAnywhere)
    float SlowPlayRate;
    
    UPROPERTY(EditAnywhere)
    float FastPlayRate;
    
    ALSV4_CPP_API FALSRotateInPlaceAsset();
};

