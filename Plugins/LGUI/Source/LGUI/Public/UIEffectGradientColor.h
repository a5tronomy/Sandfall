#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIEffectGradientColorDirection.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectGradientColor.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectGradientColor : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUIEffectGradientColorDirection directionType;
    
    UPROPERTY(EditAnywhere)
    bool multiplySourceAlpha;
    
    UPROPERTY(EditAnywhere)
    FColor Color1;
    
    UPROPERTY(EditAnywhere)
    FColor Color2;
    
    UPROPERTY(EditAnywhere)
    FColor Color3;
    
    UPROPERTY(EditAnywhere)
    FColor color4;
    
public:
    UUIEffectGradientColor(const FObjectInitializer& ObjectInitializer);

};

