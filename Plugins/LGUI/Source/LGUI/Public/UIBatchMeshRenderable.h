#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderable.h"
#include "UIBatchMeshRenderable.generated.h"

class ULGUIGeometryHelper;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIBatchMeshRenderable : public UUIBaseRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* CustomUIMaterial;
    
private:
    UPROPERTY(Transient)
    ULGUIGeometryHelper* GeometryHelper;
    
public:
    UUIBatchMeshRenderable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCustomUIMaterial(UMaterialInterface* InMat);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnUpdateGeometry(ULGUIGeometryHelper* InGeometryHelper, bool InTriangleChanged, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnBeforeCreateOrUpdateGeometry();
    
    UFUNCTION(BlueprintImplementableEvent)
    UTexture* ReceiveGetTextureToCreateGeometry();
    
    UFUNCTION(BlueprintImplementableEvent)
    UMaterialInterface* ReceiveGetMaterialToCreateGeometry();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkVerticesDirty();
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetCustomUIMaterial() const;
    
};

