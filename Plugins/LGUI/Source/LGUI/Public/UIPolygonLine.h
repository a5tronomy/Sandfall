#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELTweenEase.h"
#include "UI2DLineRendererBase.h"
#include "UIPolygonLine.generated.h"

class ULTweener;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPolygonLine : public UUI2DLineRendererBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool FullCycle;
    
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(EditAnywhere)
    float EndAngle;
    
    UPROPERTY(EditAnywhere)
    int32 Sides;
    
    UPROPERTY(EditAnywhere)
    TArray<float> VertexOffsetArray;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FVector2D> CurrentPointArray;
    
public:
    UUIPolygonLine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ULTweener* StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexOffsetArray(const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSides(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullCycle(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEndAngle(float Value);
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetVertexOffsetArray() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartAngle() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSides() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFullCycle() const;
    
    UFUNCTION(BlueprintPure)
    float GetEndAngle() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* EndAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
};

