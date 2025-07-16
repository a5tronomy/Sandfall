#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SF_ReadTexturePixelQuery.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SANDFALL_API USF_ReadTexturePixelQuery : public UObject {
    GENERATED_BODY()
public:
    USF_ReadTexturePixelQuery();

    UFUNCTION(BlueprintCallable)
    bool TryReadPixel(int32 PositionX, int32 PositionY, uint8& PixelValue, float& PixelValueNormalized);
    
private:
    UFUNCTION(BlueprintPure)
    bool HasValidData();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetTextureWidth();
    
    UFUNCTION(BlueprintPure)
    int32 GetTextureHeight();
    
    UFUNCTION(BlueprintCallable)
    void FeedTexture(TSoftObjectPtr<UTexture2D> TextureRef);
    
};

