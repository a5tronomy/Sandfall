#include "LightingScenarioHelpers.h"

ULightingScenarioHelpers::ULightingScenarioHelpers() {
}

void ULightingScenarioHelpers::MarkWholeRenderStateDirty(UActorComponent* Target) {
}

FExponentialHeightFogData ULightingScenarioHelpers::Lerp_FExponentialHeightFogData(const FExponentialHeightFogData& A, const FExponentialHeightFogData& B, float T) {
    return FExponentialHeightFogData{};
}

FColor ULightingScenarioHelpers::Lerp_FColor(FColor A, FColor B, float T) {
    return FColor{};
}

void ULightingScenarioHelpers::BlendSkyLightComponent(USkyLightComponent* Source, USkyLightComponent* Destination, USkyLightComponent* Target, float Multiplier) {
}

void ULightingScenarioHelpers::BlendSkyAtmosphereComponent(USkyAtmosphereComponent* Source, USkyAtmosphereComponent* Destination, USkyAtmosphereComponent* Target, float Multiplier) {
}

void ULightingScenarioHelpers::BlendLightComponentBase(ULightComponentBase* Source, ULightComponentBase* Destination, ULightComponentBase* Target, float Multiplier) {
}

void ULightingScenarioHelpers::BlendLightComponent(ULightComponent* Source, ULightComponent* Destination, ULightComponent* Target, float Multiplier) {
}

void ULightingScenarioHelpers::BlendExponentialHeightFogComponent(UExponentialHeightFogComponent* Source, UExponentialHeightFogComponent* Destination, UExponentialHeightFogComponent* Target, float Multiplier) {
}

void ULightingScenarioHelpers::BlendDirectionalLightComponent(UDirectionalLightComponent* Source, UDirectionalLightComponent* Destination, UDirectionalLightComponent* Target, float Multiplier) {
}


