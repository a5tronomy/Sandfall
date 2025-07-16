#pragma once
#include "CoreMinimal.h"
#include "ELTweenEase.h"
#include "EUI2DLineRenderer_EndType.h"
#include "UISpriteBase.h"
#include "UI2DLineRendererBase.generated.h"

class ULTweener;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUI2DLineRendererBase : public UUISpriteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LineWidth;
    
    UPROPERTY(EditAnywhere)
    EUI2DLineRenderer_EndType EndType;
    
    UPROPERTY(EditAnywhere)
    bool bEndCapSizeAffectByLineWidth;
    
    UPROPERTY(EditAnywhere)
    float LineWidthOffset;
    
public:
    UUI2DLineRendererBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLineWidthOffset(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLineWidth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEndType(EUI2DLineRenderer_EndType NewValue);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* LineWidthTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
    UFUNCTION(BlueprintPure)
    float GetLineWidthOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetLineWidth() const;
    
    UFUNCTION(BlueprintPure)
    EUI2DLineRenderer_EndType GetEndType() const;
    
};

