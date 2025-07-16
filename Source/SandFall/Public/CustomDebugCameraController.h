#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "CustomDebugCameraController.generated.h"

UCLASS()
class SANDFALL_API ACustomDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ACustomDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

