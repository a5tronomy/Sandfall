#pragma once
#include "CoreMinimal.h"
#include "UIBatchMeshRenderable.h"
#include "UITextureBase.generated.h"

class UTexture;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUITextureBase : public UUIBatchMeshRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
public:
    UUITextureBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* newTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeFromTexture();
    
    UFUNCTION(BlueprintPure)
    UTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable)
    static UTexture* GetDefaultWhiteTexture();
    
};

