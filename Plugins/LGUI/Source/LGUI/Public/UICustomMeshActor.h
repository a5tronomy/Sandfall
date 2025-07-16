#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UICustomMeshActor.generated.h"

class UUICustomMesh;

UCLASS()
class LGUI_API AUICustomMeshActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUICustomMesh* UICustomMesh;
    
public:
    AUICustomMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUICustomMesh* GetUICustomMesh() const;
    
};

