#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionMaterialXFractal3D.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput position;
    
    UPROPERTY()
    FExpressionInput Amplitude;
    
    UPROPERTY(EditAnywhere)
    float ConstAmplitude;
    
    UPROPERTY()
    FExpressionInput Octaves;
    
    UPROPERTY(EditAnywhere)
    int32 ConstOctaves;
    
    UPROPERTY()
    FExpressionInput Lacunarity;
    
    UPROPERTY(EditAnywhere)
    float ConstLacunarity;
    
    UPROPERTY()
    FExpressionInput Diminish;
    
    UPROPERTY(EditAnywhere)
    float ConstDiminish;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    bool bTurbulence;
    
    UPROPERTY(EditAnywhere)
    int32 Levels;
    
    UPROPERTY(EditAnywhere)
    float OutputMin;
    
    UPROPERTY(EditAnywhere)
    float OutputMax;
    
    UMaterialExpressionMaterialXFractal3D();

};

