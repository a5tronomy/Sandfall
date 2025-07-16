#pragma once
#include "CoreMinimal.h"
#include "LGUICustomMesh.h"
#include "LGUICustomMesh_Cylinder.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUICustomMesh_Cylinder : public ULGUICustomMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
public:
    ULGUICustomMesh_Cylinder();

};

