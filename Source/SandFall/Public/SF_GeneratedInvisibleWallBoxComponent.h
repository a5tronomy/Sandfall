#pragma once
#include "CoreMinimal.h"
#include "SF_GeneratedInvisibleWallBase.h"
#include "SF_GeneratedInvisibleWallBoxComponent.generated.h"

class UBoxComponent;

UCLASS()
class SANDFALL_API ASF_GeneratedInvisibleWallBoxComponent : public ASF_GeneratedInvisibleWallBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UBoxComponent* BoxCollisionComponent;
    
public:
    ASF_GeneratedInvisibleWallBoxComponent(const FObjectInitializer& ObjectInitializer);

};

