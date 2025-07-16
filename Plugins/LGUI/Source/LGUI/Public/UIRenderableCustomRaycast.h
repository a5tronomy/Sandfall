#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIRenderableCustomRaycast.generated.h"

class UUIBaseRenderable;
class UUIBatchMeshRenderable;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API UUIRenderableCustomRaycast : public UObject {
    GENERATED_BODY()
public:
    UUIRenderableCustomRaycast();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveRaycast(UUIBaseRenderable* InUIRenderable, const FVector& InLocalSpaceRayStart, const FVector& InLocalSpaceRayEnd, FVector& OutHitPoint, FVector& OutHitNormal);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRaycastPixelFromUIBatchMeshRenderable(UUIBatchMeshRenderable* InUIRenderable, const FVector& InLocalSpaceRayStart, const FVector& InLocalSpaceRayEnd, FVector2D& OutUV, FColor& OutPixel, FVector& OutHitPoint, FVector& OutHitNormal);
    
};

