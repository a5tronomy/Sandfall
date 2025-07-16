#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderable.h"
#include "UIDirectMeshRenderable.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIDirectMeshRenderable : public UUIBaseRenderable {
    GENERATED_BODY()
public:
    UUIDirectMeshRenderable(const FObjectInitializer& ObjectInitializer);

};

