#pragma once
#include "CoreMinimal.h"
#include "InterchangeLodSceneNodeContainer.h"
#include "InterchangeMeshInstance.generated.h"

class UInterchangeSceneNode;

USTRUCT(BlueprintType)
struct FInterchangeMeshInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString MeshInstanceUid;
    
    UPROPERTY(EditAnywhere)
    UInterchangeSceneNode* LodGroupNode;
    
    UPROPERTY(EditAnywhere)
    bool bReferenceSkinnedMesh;
    
    UPROPERTY(EditAnywhere)
    bool bReferenceMorphTarget;
    
    UPROPERTY(EditAnywhere)
    bool bHasMorphTargets;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ReferencingMeshGeometryUids;
    
    INTERCHANGEPIPELINES_API FInterchangeMeshInstance();
};

