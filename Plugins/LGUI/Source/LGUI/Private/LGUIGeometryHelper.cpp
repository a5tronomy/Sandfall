#include "LGUIGeometryHelper.h"

ULGUIGeometryHelper::ULGUIGeometryHelper() {
}

void ULGUIGeometryHelper::SetMesh(const TArray<FLGUIGeometryVertex>& InVertices, const TArray<int32>& InIndices) {
}

void ULGUIGeometryHelper::GetVertexTriangleStream(TArray<FLGUIGeometryVertex>& OutVertexTriangleStream) {
}

void ULGUIGeometryHelper::Clear() {
}

FVector2D ULGUIGeometryHelper::CalculatePivotOffset(float InWidth, float InHeight, const FVector2D& InPivot) {
    return FVector2D{};
}

void ULGUIGeometryHelper::AddVertexTriangleStream(const TArray<FLGUIGeometryVertex>& InVertexTriangleStream) {
}

void ULGUIGeometryHelper::AddVertexStruct(FLGUIGeometryVertex Vertex) {
}

void ULGUIGeometryHelper::AddVertexSimple(FVector position, FColor Color, FVector2D UV0) {
}

void ULGUIGeometryHelper::AddVertexFull(FVector position, FColor Color, FVector2D UV0, FVector2D UV1, FVector2D UV2, FVector2D UV3, FVector Normal, FVector Tangent) {
}

void ULGUIGeometryHelper::AddTriangle(int32 Index0, int32 index1, int32 index2) {
}


