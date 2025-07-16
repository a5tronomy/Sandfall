#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIGeometryHelper.h"
#include "LGUICustomMesh.generated.h"

class UUIBatchMeshRenderable;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API ULGUICustomMesh : public ULGUIGeometryHelper {
    GENERATED_BODY()
public:
    ULGUICustomMesh();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveSupportDrawcallBatching() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnFillMesh(UUIBatchMeshRenderable* InRenderable, bool InTriangleChanged, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveGetHitUV(const UUIBatchMeshRenderable* InRenderable, const int32& InHitFaceIndex, const FVector& InHitPoint, const FVector& InLineStart, const FVector& InLineEnd, FVector2D& OutHitUV) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitUVbyFaceIndex(const UUIBatchMeshRenderable* InRenderable, const int32& InHitFaceIndex, const FVector& InHitPoint, FVector2D& OutHitUV) const;
    
};

