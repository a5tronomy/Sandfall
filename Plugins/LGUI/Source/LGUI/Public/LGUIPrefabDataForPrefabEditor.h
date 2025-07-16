#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "LGUIPrefabDataForPrefabEditor.generated.h"

USTRUCT()
struct FLGUIPrefabDataForPrefabEditor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ViewLocation;
    
    UPROPERTY()
    FRotator ViewRotation;
    
    UPROPERTY()
    FVector ViewOrbitLocation;
    
    UPROPERTY()
    FIntPoint CanvasSize;
    
    UPROPERTY()
    bool bNeedCanvas;
    
    UPROPERTY()
    uint8 CanvasRenderMode;
    
    UPROPERTY()
    TEnumAsByte<EViewModeIndex> ViewMode;
    
    UPROPERTY()
    TSet<FGuid> UnexpendActorSet;
    
    LGUI_API FLGUIPrefabDataForPrefabEditor();
};

