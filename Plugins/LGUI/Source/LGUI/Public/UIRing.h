#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELTweenEase.h"
#include "UI2DLineRendererBase.h"
#include "UIRing.generated.h"

class ULTweener;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIRing : public UUI2DLineRendererBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(EditAnywhere)
    float EndAngle;
    
    UPROPERTY(EditAnywhere)
    int32 Segment;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FVector2D> CurrentPointArray;
    
public:
    UUIRing(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ULTweener* StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAngle(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSegment(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEndAngle(float NewValue);
    
    UFUNCTION(BlueprintPure)
    float GetStartAngle() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSegment() const;
    
    UFUNCTION(BlueprintPure)
    float GetEndAngle() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* EndAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
};

