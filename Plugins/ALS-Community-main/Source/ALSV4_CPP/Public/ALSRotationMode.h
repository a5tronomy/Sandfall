#pragma once
#include "CoreMinimal.h"
#include "EALSRotationMode.h"
#include "ALSRotationMode.generated.h"

USTRUCT(BlueprintType)
struct FALSRotationMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    EALSRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool VelocityDirection_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool LookingDirection_;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Aiming_;
    
public:
    ALSV4_CPP_API FALSRotationMode();
};

