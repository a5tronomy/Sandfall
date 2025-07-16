#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_RotationRandomProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RotationRandomProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    FRotator min;
    
    UPROPERTY(EditAnywhere)
    FRotator max;
    
public:
    UUIEffectTextAnimation_RotationRandomProperty();

    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMin(FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMax(FRotator Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetMin() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetMax() const;
    
};

