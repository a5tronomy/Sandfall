#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditorDebugShape_Base.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FEditorDebugShape_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    FEditorDebugShape_Base();
};

