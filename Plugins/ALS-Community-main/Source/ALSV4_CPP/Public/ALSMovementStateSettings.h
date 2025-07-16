#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ALSMovementStanceSettings.h"
#include "ALSMovementStateSettings.generated.h"

USTRUCT(BlueprintType)
struct FALSMovementStateSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FALSMovementStanceSettings VelocityDirection;
    
    UPROPERTY(EditAnywhere)
    FALSMovementStanceSettings LookingDirection;
    
    UPROPERTY(EditAnywhere)
    FALSMovementStanceSettings Aiming;
    
    ALSV4_CPP_API FALSMovementStateSettings();
};

