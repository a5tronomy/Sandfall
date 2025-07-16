#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectOutline.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectOutline : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FColor OutlineColor;
    
    UPROPERTY(EditAnywhere)
    FVector2D OutlineSize;
    
    UPROPERTY(EditAnywhere)
    bool multiplySourceAlpha;
    
    UPROPERTY(EditAnywhere)
    bool use8Direction;
    
public:
    UUIEffectOutline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUse8Direction(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineSize(FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineColor(FColor NewColor);
    
    UFUNCTION(BlueprintPure)
    bool GetUse8Direction() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetOutlineSize() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetOutlineColor() const;
    
};

