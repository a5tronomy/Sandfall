#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIDynamicSpriteAtlasData.h"
#include "LGUIDynamicSpriteAtlasManager.generated.h"

UCLASS(BlueprintType)
class LGUI_API ULGUIDynamicSpriteAtlasManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FLGUIDynamicSpriteAtlasData> atlasMap;
    
public:
    ULGUIDynamicSpriteAtlasManager();

    UFUNCTION(BlueprintCallable)
    static void DisposeAtlasByPackingTag(FName inPackingTag);
    
};

