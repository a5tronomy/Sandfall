#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "LGUICustomMesh.h"
#include "LGUICustomMesh_CurvyPlane.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUICustomMesh_CurvyPlane : public ULGUICustomMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 Segment;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ShapeCurve;
    
    UPROPERTY(EditAnywhere)
    float CurveScale;
    
public:
    ULGUICustomMesh_CurvyPlane();

};

