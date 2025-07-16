#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIStaticMeshActor.generated.h"

class UUIStaticMesh;

UCLASS()
class LGUI_API AUIStaticMeshActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIStaticMesh* UIStaticMesh;
    
public:
    AUIStaticMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIStaticMesh* GetUIStaticMesh() const;
    
};

