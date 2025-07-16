#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "HoudiniInputMeshComponent.h"
#include "HoudiniInputSplineMeshComponent.generated.h"

class UStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGuid MeshPackageGuid;
    
    UPROPERTY()
    UStaticMesh* GeneratedMesh;
    
    UPROPERTY()
    TEnumAsByte<ESplineMeshAxis::Type> CachedForwardAxis;
    
    UPROPERTY()
    FSplineMeshParams CachedSplineParams;
    
    UPROPERTY()
    FVector CachedSplineUpDir;
    
    UPROPERTY()
    float CachedSplineBoundaryMax;
    
    UPROPERTY()
    float CachedSplineBoundaryMin;
    
    UPROPERTY()
    uint8 CachedbSmoothInterpRollScale: 1;
    
public:
    UHoudiniInputSplineMeshComponent();

};

