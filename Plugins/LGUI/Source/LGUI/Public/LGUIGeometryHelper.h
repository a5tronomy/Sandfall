#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIGeometryVertex.h"
#include "LGUIGeometryHelper.generated.h"

UCLASS(BlueprintType)
class LGUI_API ULGUIGeometryHelper : public UObject {
    GENERATED_BODY()
public:
    ULGUIGeometryHelper();

    UFUNCTION(BlueprintCallable)
    void SetMesh(const TArray<FLGUIGeometryVertex>& InVertices, const TArray<int32>& InIndices);
    
    UFUNCTION(BlueprintCallable)
    void GetVertexTriangleStream(TArray<FLGUIGeometryVertex>& OutVertexTriangleStream);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D CalculatePivotOffset(float InWidth, float InHeight, const FVector2D& InPivot);
    
    UFUNCTION(BlueprintCallable)
    void AddVertexTriangleStream(const TArray<FLGUIGeometryVertex>& InVertexTriangleStream);
    
    UFUNCTION(BlueprintCallable)
    void AddVertexStruct(FLGUIGeometryVertex Vertex);
    
    UFUNCTION(BlueprintCallable)
    void AddVertexSimple(FVector position, FColor Color, FVector2D UV0);
    
    UFUNCTION(BlueprintCallable)
    void AddVertexFull(FVector position, FColor Color, FVector2D UV0, FVector2D UV1, FVector2D UV2, FVector2D UV3, FVector Normal, FVector Tangent);
    
    UFUNCTION(BlueprintCallable)
    void AddTriangle(int32 Index0, int32 index1, int32 index2);
    
};

