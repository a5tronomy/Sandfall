#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIStaticMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FLGUIStaticMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector position;
    
    UPROPERTY()
    FVector TangentX;
    
    UPROPERTY()
    FVector TangentZ;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    FVector2D UV0;
    
    UPROPERTY()
    FVector2D UV1;
    
    UPROPERTY()
    FVector2D UV2;
    
    UPROPERTY()
    FVector2D UV3;
    
    LGUI_API FLGUIStaticMeshVertex();
};

