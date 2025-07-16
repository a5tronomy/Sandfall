#include "UIPolygonLine.h"
#include "EUI2DLineRenderer_EndType.h"

UUIPolygonLine::UUIPolygonLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndType = EUI2DLineRenderer_EndType::ConnectStartAndEnd;
    this->FullCycle = true;
    this->StartAngle = 0.00f;
    this->EndAngle = 90.00f;
    this->Sides = 3;
}

ULTweener* UUIPolygonLine::StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}

void UUIPolygonLine::SetVertexOffsetArray(const TArray<float>& Value) {
}

void UUIPolygonLine::SetStartAngle(float Value) {
}

void UUIPolygonLine::SetSides(int32 Value) {
}

void UUIPolygonLine::SetFullCycle(bool Value) {
}

void UUIPolygonLine::SetEndAngle(float Value) {
}

TArray<float> UUIPolygonLine::GetVertexOffsetArray() const {
    return TArray<float>();
}

float UUIPolygonLine::GetStartAngle() const {
    return 0.0f;
}

int32 UUIPolygonLine::GetSides() const {
    return 0;
}

bool UUIPolygonLine::GetFullCycle() const {
    return false;
}

float UUIPolygonLine::GetEndAngle() const {
    return 0.0f;
}

ULTweener* UUIPolygonLine::EndAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}


