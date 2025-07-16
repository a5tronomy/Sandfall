#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EditorDebugShape_Arrow.h"
#include "SF_EditorDebugDrawSource.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USF_EditorDebugDrawSource : public UInterface {
    GENERATED_BODY()
};

class ISF_EditorDebugDrawSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Editor_GetDebugShapes(UPARAM(Ref) TArray<FEditorDebugShape_Arrow>& Arrows, UPARAM(Ref) TArray<FEditorDebugShape_Arrow>& Lines) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Editor_DrawDebugShapes() const;
    
};

