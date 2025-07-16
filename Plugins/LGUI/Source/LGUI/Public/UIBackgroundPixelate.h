#pragma once
#include "CoreMinimal.h"
#include "UIPostProcessRenderable.h"
#include "UIBackgroundPixelate.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIBackgroundPixelate : public UUIPostProcessRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float pixelateStrength;
    
    UPROPERTY(EditAnywhere)
    bool applyAlphaToStrength;
    
public:
    UUIBackgroundPixelate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPixelateStrength(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToStrength(bool NewValue);
    
    UFUNCTION(BlueprintPure)
    float GetPixelateStrength() const;
    
    UFUNCTION(BlueprintPure)
    bool GetApplyAlphaToStrength() const;
    
};

