#pragma once
#include "CoreMinimal.h"
#include "EALSGait.h"
#include "ALSGait.generated.h"

USTRUCT(BlueprintType)
struct FALSGait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSGait Gait;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Walking_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Running_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Sprinting_;
    
public:
    ALSV4_CPP_API FALSGait();
};

