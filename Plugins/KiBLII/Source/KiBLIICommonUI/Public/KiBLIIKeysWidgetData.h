#pragma once
#include "CoreMinimal.h"
#include "KiBLIIKeysWidgetData.generated.h"

class UKiBLIIKeysWidget;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FKiBLIIKeysWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UKiBLIIKeysWidget* Widget;
    
    UPROPERTY()
    UTextureRenderTarget2D* Texture;
    
    KIBLIICOMMONUI_API FKiBLIIKeysWidgetData();
};

