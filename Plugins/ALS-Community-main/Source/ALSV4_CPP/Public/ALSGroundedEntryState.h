#pragma once
#include "CoreMinimal.h"
#include "EALSGroundedEntryState.h"
#include "ALSGroundedEntryState.generated.h"

USTRUCT(BlueprintType)
struct FALSGroundedEntryState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSGroundedEntryState State;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool None_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Roll_;
    
public:
    ALSV4_CPP_API FALSGroundedEntryState();
};

