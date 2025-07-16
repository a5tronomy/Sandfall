#pragma once
#include "CoreMinimal.h"
#include "InterchangeMeshGeometry.generated.h"

class UInterchangeMeshNode;

USTRUCT(BlueprintType)
struct FInterchangeMeshGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString MeshUid;
    
    UPROPERTY(EditAnywhere)
    UInterchangeMeshNode* MeshNode;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ReferencingMeshInstanceUids;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> AttachedSocketUids;
    
    INTERCHANGEPIPELINES_API FInterchangeMeshGeometry();
};

