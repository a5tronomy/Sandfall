#pragma once
#include "CoreMinimal.h"
#include "UIDirectMeshRenderable.h"
#include "UIStaticMeshVertexColorType.h"
#include "UIStaticMesh.generated.h"

class ULGUIStaticMeshCacheData;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIStaticMesh : public UUIDirectMeshRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ULGUIStaticMeshCacheData* meshCache;
    
    UPROPERTY(EditAnywhere)
    UIStaticMeshVertexColorType vertexColorType;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ReplaceMaterial;
    
public:
    UUIStaticMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVertexColorType(UIStaticMeshVertexColorType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReplaceMaterial(UMaterialInterface* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMesh(ULGUIStaticMeshCacheData* Value);
    
    UFUNCTION(BlueprintPure)
    UIStaticMeshVertexColorType GetVertexColorType() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetReplaceMaterial() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetRenderMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetOrCreateDynamicMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    ULGUIStaticMeshCacheData* GetMeshCache() const;
    
};

