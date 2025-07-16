#pragma once
#include "CoreMinimal.h"
#include "EALSStance.h"
#include "ALSStance.generated.h"

USTRUCT(BlueprintType)
struct FALSStance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSStance Stance;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Standing_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Crouching_;
    
public:
    ALSV4_CPP_API FALSStance();
};

