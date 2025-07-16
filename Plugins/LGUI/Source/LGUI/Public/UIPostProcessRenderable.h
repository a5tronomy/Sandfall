#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIPostProcessMaskTextureType.h"
#include "LGUISpriteInfo.h"
#include "UIBaseRenderable.h"
#include "UIPostProcessRenderable.generated.h"

class UTexture2D;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPostProcessRenderable : public UUIBaseRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTexture2D* maskTexture;
    
    UPROPERTY(EditAnywhere)
    EUIPostProcessMaskTextureType MaskTextureType;
    
    UPROPERTY(EditAnywhere)
    FLGUISpriteInfo MaskTextureSpriteInfo;
    
    UPROPERTY(EditAnywhere)
    FVector4 MaskTextureUVRect;
    
public:
    UUIPostProcessRenderable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaskTextureUVRect(const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskTextureType(EUIPostProcessMaskTextureType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskTextureSpriteInfo(const FLGUISpriteInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskTexture(UTexture2D* NewValue);
    
    UFUNCTION(BlueprintPure)
    FVector4 GetMaskTextureUVRect() const;
    
    UFUNCTION(BlueprintPure)
    EUIPostProcessMaskTextureType GetMaskTextureType() const;
    
    UFUNCTION(BlueprintPure)
    FLGUISpriteInfo GetMaskTextureSpriteInfo() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetMaskTexture() const;
    
};

