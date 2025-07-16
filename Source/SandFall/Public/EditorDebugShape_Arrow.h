#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditorDebugShape_Base.h"
#include "EditorDebugShape_Arrow.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FEditorDebugShape_Arrow : public FEditorDebugShape_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector End;
    
    FEditorDebugShape_Arrow();
};

