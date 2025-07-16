#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectLongShadow.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectLongShadow : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FColor ShadowColor;
    
    UPROPERTY(EditAnywhere)
    FVector shadowSize;
    
    UPROPERTY(EditAnywhere)
    uint8 shadowSegment;
    
    UPROPERTY(EditAnywhere)
    bool useGradientColor;
    
    UPROPERTY(EditAnywhere)
    FColor gradientColor;
    
    UPROPERTY(EditAnywhere)
    bool multiplySourceAlpha;
    
public:
    UUIEffectLongShadow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseGradientColor(bool newBool);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowSize(FVector NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowSegment(uint8 newSegment);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetGradientColor(FColor NewColor);
    
    UFUNCTION(BlueprintPure)
    bool GetUseGradientColor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetShadowSize() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetShadowSegments() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetShadowColor() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetGradientColor() const;
    
};

