#include "UI2DLineRaw.h"

UUI2DLineRaw::UUI2DLineRaw(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointArray.AddDefaulted(2);
}

void UUI2DLineRaw::SetPoints(const TArray<FVector2D>& InPoints) {
}


