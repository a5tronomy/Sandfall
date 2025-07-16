#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LGUISpriteInfo.h"
#include "LGUISpriteData_BaseObject.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType)
class LGUI_API ULGUISpriteData_BaseObject : public UObject {
    GENERATED_BODY()
public:
    ULGUISpriteData_BaseObject();

    UFUNCTION(BlueprintPure)
    bool ReadPixel(const FVector2D& InUV, FColor& OutPixel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsIndividual() const;
    
    UFUNCTION(BlueprintCallable)
    FLGUISpriteInfo GetSpriteInfo();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAtlasTexture();
    
};

