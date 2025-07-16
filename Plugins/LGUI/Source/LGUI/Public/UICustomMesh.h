#pragma once
#include "CoreMinimal.h"
#include "UIBatchMeshRenderable.h"
#include "UICustomMesh.generated.h"

class ULGUICustomMesh;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUICustomMesh : public UUIBatchMeshRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    ULGUICustomMesh* CustomMesh;
    
public:
    UUICustomMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCustomMesh(ULGUICustomMesh* Value);
    
    UFUNCTION(BlueprintPure)
    ULGUICustomMesh* GetCustomMesh() const;
    
};

