#pragma once
#include "CoreMinimal.h"
#include "EALSMovementState.h"
#include "ALSMovementState.generated.h"

USTRUCT(BlueprintType)
struct FALSMovementState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSMovementState State;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool None_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Grounded_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool InAir_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Mantling_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Ragdoll_;
    
public:
    ALSV4_CPP_API FALSMovementState();
};

