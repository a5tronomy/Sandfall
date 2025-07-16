#pragma once
#include "CoreMinimal.h"
#include "ELTweenEase.h"
#include "UIPolygonUVType.h"
#include "UISpriteBase.h"
#include "UIPolygon.generated.h"

class ULTweener;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPolygon : public UUISpriteBase {
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
    UIPolygonUVType UVType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> VertexOffsetArray;
    
public:
    UUIPolygon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ULTweener* StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexOffsetArray(const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUVType(UIPolygonUVType Value);
    
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
    UIPolygonUVType GetUVType() const;
    
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

