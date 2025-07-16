#pragma once
#include "CoreMinimal.h"
#include "ALSDynamicMontageParams.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FALSDynamicMontageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    ALSV4_CPP_API FALSDynamicMontageParams();
};

