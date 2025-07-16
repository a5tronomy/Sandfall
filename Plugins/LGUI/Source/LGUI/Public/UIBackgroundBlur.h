#pragma once
#include "CoreMinimal.h"
#include "UIPostProcessRenderable.h"
#include "UIBackgroundBlur.generated.h"

class UTexture2D;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIBackgroundBlur : public UUIPostProcessRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BlurStrength;
    
    UPROPERTY(EditAnywhere)
    bool applyAlphaToBlur;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 maxDownSampleLevel;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* strengthTexture;
    
public:
    UUIBackgroundBlur(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStrengthTexture(UTexture2D* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDownSampleLevel(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurStrength(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToBlur(bool NewValue);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetStrengthTexture() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxDownSampleLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlurStrength() const;
    
    UFUNCTION(BlueprintPure)
    bool GetApplyAlphaToBlur() const;
    
};

