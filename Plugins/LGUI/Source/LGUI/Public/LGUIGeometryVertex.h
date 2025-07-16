#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIGeometryVertex.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIGeometryVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV0;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector2D UV1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector2D UV2;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector2D UV3;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector Tangent;
    
    FLGUIGeometryVertex();
};

