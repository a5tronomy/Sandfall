#pragma once
#include "CoreMinimal.h"
#include "InterchangeLodSceneNodeContainer.generated.h"

class UInterchangeSceneNode;

USTRUCT()
struct FInterchangeLodSceneNodeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UInterchangeSceneNode*> SceneNodes;
    
    INTERCHANGEPIPELINES_API FInterchangeLodSceneNodeContainer();
};

