#include "UIPolygon.h"

UUIPolygon::UUIPolygon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FullCycle = true;
    this->StartAngle = 0.00f;
    this->EndAngle = 90.00f;
    this->Sides = 3;
    this->UVType = UIPolygonUVType::SpriteRect;
}

ULTweener* UUIPolygon::StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}

void UUIPolygon::SetVertexOffsetArray(const TArray<float>& Value) {
}

void UUIPolygon::SetUVType(UIPolygonUVType Value) {
}

void UUIPolygon::SetStartAngle(float Value) {
}

void UUIPolygon::SetSides(int32 Value) {
}

void UUIPolygon::SetFullCycle(bool Value) {
}

void UUIPolygon::SetEndAngle(float Value) {
}

TArray<float> UUIPolygon::GetVertexOffsetArray() const {
    return TArray<float>();
}

UIPolygonUVType UUIPolygon::GetUVType() const {
    return UIPolygonUVType::SpriteRect;
}

float UUIPolygon::GetStartAngle() const {
    return 0.0f;
}

int32 UUIPolygon::GetSides() const {
    return 0;
}

bool UUIPolygon::GetFullCycle() const {
    return false;
}

float UUIPolygon::GetEndAngle() const {
    return 0.0f;
}

ULTweener* UUIPolygon::EndAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}


