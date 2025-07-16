#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_ColorRandomProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_ColorRandomProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    FColor min;
    
    UPROPERTY(EditAnywhere)
    FColor max;
    
    UPROPERTY(EditAnywhere)
    bool useHSV;
    
public:
    UUIEffectTextAnimation_ColorRandomProperty();

    UFUNCTION(BlueprintCallable)
    void SetUseHSV(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMin(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMax(FColor Value);
    
    UFUNCTION(BlueprintPure)
    bool GetUseHSV() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetMin() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetMax() const;
    
};

