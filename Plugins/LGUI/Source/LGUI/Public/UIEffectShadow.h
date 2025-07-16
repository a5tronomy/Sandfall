#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectShadow.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectShadow : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FColor ShadowColor;
    
    UPROPERTY(EditAnywhere)
    bool multiplySourceAlpha;
    
    UPROPERTY(EditAnywhere)
    FVector2D ShadowOffset;
    
public:
    UUIEffectShadow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D newOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColor(FColor NewColor);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetShadowOffset() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetShadowColor() const;
    
};

