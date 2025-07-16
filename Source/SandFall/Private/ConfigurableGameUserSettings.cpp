#include "ConfigurableGameUserSettings.h"

UConfigurableGameUserSettings::UConfigurableGameUserSettings() {
    this->bUseVSync = true;
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->CurrentSelectedMonitorIDName = TEXT("MONITOR\\DELA161\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\0003DELA161");
    this->CurrentSelectedUpscaler = TEXT("TSR");
    this->CurrentSelectedUpscalerQualityMode = 0;
    this->UserConfigHardwareProfile = TEXT("13thGenIntel(R)Core(TM)i9-13900K72254587264318");
}

void UConfigurableGameUserSettings::SetVoiceVolume(float Value) {
}

void UConfigurableGameUserSettings::SetUserInterfaceVolume(float Value) {
}

void UConfigurableGameUserSettings::SetUpscalerUsedValue(int32 Value) {
}

void UConfigurableGameUserSettings::SetUpscalerQualityModeUsedValue(int32 Value) {
}

void UConfigurableGameUserSettings::SetSubtitlesSize(int32 Value) {
}

void UConfigurableGameUserSettings::SetSpecialEffectsVolume(float Value) {
}

void UConfigurableGameUserSettings::SetSelectedDisplayMonitor(int32 Value) {
}

void UConfigurableGameUserSettings::SetNotFocusedVolume(float Value) {
}

void UConfigurableGameUserSettings::SetMusicVolume(float Value) {
}

void UConfigurableGameUserSettings::SetMenuUltrawideConstrain(FIntPoint Value) {
}

void UConfigurableGameUserSettings::SetMasterVolume(float Value) {
}

void UConfigurableGameUserSettings::SetInvertCameraYaw(bool Value) {
}

void UConfigurableGameUserSettings::SetInvertCameraPitch(bool Value) {
}

void UConfigurableGameUserSettings::SetIntConsoleVariable(const FString& CVarName, int32 Value) {
}

void UConfigurableGameUserSettings::SetGammaValue(float Value) {
}

void UConfigurableGameUserSettings::SetGameCulture(const FString& Culture) {
}

void UConfigurableGameUserSettings::SetFloatConsoleVariable(const FString& CVarName, float Value) {
}

void UConfigurableGameUserSettings::SetEnableVignette(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableTutorials(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableSubtitlesSpeakerPersonalColor(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableSubtitlesSpeakerDisplay(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableSubtitles(bool Value) {
}

void UConfigurableGameUserSettings::SetEnablePersistentCenterDot(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableMotionBlur(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableHoldInputToSprint(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableHoldInputToAim(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableFilmGrain(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableCustomizationDuringCinematics(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableControllerForceFeedback(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableChromaticAberration(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableCameraShakes(bool Value) {
}

void UConfigurableGameUserSettings::SetEnableCameraMovement(bool Value) {
}

void UConfigurableGameUserSettings::SetContrastValue(float Value) {
}

void UConfigurableGameUserSettings::SetConsoleGraphicPreset(int32 Value) {
}

void UConfigurableGameUserSettings::SetColorVisionDeficiencyCorrectionSeverity(float Value) {
}

void UConfigurableGameUserSettings::SetColorVisionDeficiency(EColorVisionDeficiency Value) {
}

void UConfigurableGameUserSettings::SetCategoryToDefaults(ESF_SettingsCategory Category) {
}

void UConfigurableGameUserSettings::SetCameraYawInputMultiplier(float Value) {
}

void UConfigurableGameUserSettings::SetCameraPitchInputMultiplier(float Value) {
}

void UConfigurableGameUserSettings::SetCameraInputMultiplier(float Value) {
}

void UConfigurableGameUserSettings::SetBrightnessValue(float Value) {
}

void UConfigurableGameUserSettings::SetBattleUltrawideConstrain(FIntPoint Value) {
}

void UConfigurableGameUserSettings::SetAutomaticBattleQTE(bool Value) {
}

void UConfigurableGameUserSettings::SetAudioGameCulture(const FString& Culture) {
}

void UConfigurableGameUserSettings::SetApplicationScale(float Value) {
}

void UConfigurableGameUserSettings::ResetCategoryToCurrentSettings(ESF_SettingsCategory Category) {
}

void UConfigurableGameUserSettings::RequestGameplayFrameRateLimit(float InLimit) {
}

void UConfigurableGameUserSettings::RemoveGameplayFrameRateLimit() {
}

bool UConfigurableGameUserSettings::IsPendingScalabilityChangesAtSameQuality() const {
    return false;
}

float UConfigurableGameUserSettings::GetVoiceVolume() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetUserInterfaceVolume() const {
    return 0.0f;
}

int32 UConfigurableGameUserSettings::GetUpscalerUsedValue() const {
    return 0;
}

int32 UConfigurableGameUserSettings::GetUpscalerQualityModeUsedValue() const {
    return 0;
}

bool UConfigurableGameUserSettings::GetSupportedResolutionForCurrentMonitor(TArray<FIntPoint>& Resolutions) {
    return false;
}

int32 UConfigurableGameUserSettings::GetSubtitlesSize() const {
    return 0;
}

float UConfigurableGameUserSettings::GetSpecialEffectsVolume() const {
    return 0.0f;
}

void UConfigurableGameUserSettings::GetSelectedUpscalerShouldLockScreenPercentage(bool& ShouldLockScreenPercentage) {
}

void UConfigurableGameUserSettings::GetSelectedUpscalerQualityModeScreenPercentage(float& ScreenPercentage) {
}

void UConfigurableGameUserSettings::GetSelectedUpscalerInfo(bool& ShouldLockScreenPercentage, int32& DefaultSelectedQualityMode) {
}

int32 UConfigurableGameUserSettings::GetSelectedDisplayMonitor() const {
    return 0;
}

float UConfigurableGameUserSettings::GetNotFocusedVolume() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetMusicVolume() const {
    return 0.0f;
}

FIntPoint UConfigurableGameUserSettings::GetMenuUltrawideConstrain() const {
    return FIntPoint{};
}

float UConfigurableGameUserSettings::GetMasterVolume() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetLastGPUHardwareBenchmarkResult() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetLastCPUHardwareBenchmarkResult() const {
    return 0.0f;
}

bool UConfigurableGameUserSettings::GetInvertCameraYaw() const {
    return false;
}

bool UConfigurableGameUserSettings::GetInvertCameraPitch() const {
    return false;
}

float UConfigurableGameUserSettings::GetGammaValue() const {
    return 0.0f;
}

FString UConfigurableGameUserSettings::GetGameCulture() const {
    return TEXT("");
}

float UConfigurableGameUserSettings::GetFloatConsoleVariable(const FString& CVarName) {
    return 0.0f;
}

bool UConfigurableGameUserSettings::GetEnableVignette() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableTutorials() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableSubtitlesSpeakerPersonalColor() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableSubtitlesSpeakerDisplay() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableSubtitles() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnablePersistentCenterDot() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableMotionBlur() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableHoldInputToSprint() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableHoldInputToAim() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableFilmGrain() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableCustomizationDuringCinematics() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableControllerForceFeedback() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableChromaticAberration() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableCameraShakes() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableCameraMovement() const {
    return false;
}

bool UConfigurableGameUserSettings::GetEnableAutomaticBattleQTE() const {
    return false;
}

float UConfigurableGameUserSettings::GetContrastValue() const {
    return 0.0f;
}

int32 UConfigurableGameUserSettings::GetConsoleGraphicPreset() const {
    return 0;
}

float UConfigurableGameUserSettings::GetColorVisionDeficiencyCorrectionSeverity() const {
    return 0.0f;
}

EColorVisionDeficiency UConfigurableGameUserSettings::GetColorVisionDeficiency() const {
    return EColorVisionDeficiency::NormalVision;
}

float UConfigurableGameUserSettings::GetCameraYawInputMultiplier() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetCameraPitchInputMultiplier() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetCameraInputMultiplier() const {
    return 0.0f;
}

float UConfigurableGameUserSettings::GetBrightnessValue() const {
    return 0.0f;
}

FIntPoint UConfigurableGameUserSettings::GetBattleUltrawideConstrain() const {
    return FIntPoint{};
}

TArray<FText> UConfigurableGameUserSettings::GetAvailableUpscaler() {
    return TArray<FText>();
}

TMap<int32, FText> UConfigurableGameUserSettings::GetAvailableQualityModeFromCurrentSelectedUpscaler() {
    return TMap<int32, FText>();
}

bool UConfigurableGameUserSettings::GetAvailableMonitorDisplayName(TArray<FText>& MonitorsName) {
    return false;
}

FString UConfigurableGameUserSettings::GetAudioGameCulture() const {
    return TEXT("");
}

float UConfigurableGameUserSettings::GetApplicationScale() const {
    return 0.0f;
}

bool UConfigurableGameUserSettings::CheckForFirstLaunchBenchmark() {
    return false;
}


