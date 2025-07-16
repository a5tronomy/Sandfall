#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier_CameraShake.h"
#include "Templates/SubclassOf.h"
#include "CameraModifier_CameraShake_BP.generated.h"

class APlayerCameraManager;
class UCameraModifier_Meta;
class UCameraShakeBase;

UCLASS()
class SANDFALL_API UCameraModifier_CameraShake_BP : public UCameraModifier_CameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCameraModifier_Meta* Modifier;
    
    UPROPERTY(EditAnywhere)
    bool StopModifierAfterShake;
    
    UPROPERTY(EditAnywhere)
    float ShakeDuration;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShakeBase> ShakeAtStart;
    
    UCameraModifier_CameraShake_BP();

    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintAddedToCamera(APlayerCameraManager* Camera);
    
};

