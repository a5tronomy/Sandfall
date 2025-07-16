#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_PositionRandomProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_PositionRandomProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    FVector min;
    
    UPROPERTY(EditAnywhere)
    FVector max;
    
public:
    UUIEffectTextAnimation_PositionRandomProperty();

    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMin(FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMax(FVector Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMax() const;
    
};

