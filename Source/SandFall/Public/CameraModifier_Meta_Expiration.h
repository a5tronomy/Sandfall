#pragma once
#include "CoreMinimal.h"
#include "CameraModifier_Meta.h"
#include "CameraModifier_Meta_Expiration.generated.h"

UCLASS(EditInlineNew)
class SANDFALL_API UCameraModifier_Meta_Expiration : public UCameraModifier_Meta {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_expirationDuration;
    
    UCameraModifier_Meta_Expiration();

};

