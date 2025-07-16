#pragma once
#include "CoreMinimal.h"
#include "SF_GeneratedInvisibleWallBase.h"
#include "SF_GeneratedInvisibleWallStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract)
class SANDFALL_API ASF_GeneratedInvisibleWallStaticMesh : public ASF_GeneratedInvisibleWallBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* MeshComponent;
    
public:
    ASF_GeneratedInvisibleWallStaticMesh(const FObjectInitializer& ObjectInitializer);

};

