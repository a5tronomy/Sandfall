#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DragonIKPhysicsHolder.generated.h"

UCLASS()
class DRAGONIKPLUGIN_API ADragonIKPhysicsHolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* connected_actor;
    
    ADragonIKPhysicsHolder(const FObjectInitializer& ObjectInitializer);

};

