#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "LGUIMeshComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    ULGUIMeshComponent(const FObjectInitializer& ObjectInitializer);

};

