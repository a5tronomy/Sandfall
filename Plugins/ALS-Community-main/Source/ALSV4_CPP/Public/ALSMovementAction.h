#pragma once
#include "CoreMinimal.h"
#include "EALSMovementAction.h"
#include "ALSMovementAction.generated.h"

USTRUCT(BlueprintType)
struct FALSMovementAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSMovementAction Action;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool None_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool LowMantle_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool HighMantle_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Rolling_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool GettingUp_;
    
public:
    ALSV4_CPP_API FALSMovementAction();
};

