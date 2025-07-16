#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIStaticMeshVertex.h"
#include "LGUIStaticMeshCacheData.generated.h"

class UMaterialInterface;

UCLASS()
class LGUI_API ULGUIStaticMeshCacheData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FLGUIStaticMeshVertex> VertexData;
    
    UPROPERTY()
    TArray<uint32> IndexData;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
public:
    ULGUIStaticMeshCacheData();

};

