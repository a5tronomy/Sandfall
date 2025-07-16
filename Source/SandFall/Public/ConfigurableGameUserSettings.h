#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "Rendering/RenderingCommon.h"
#include "ESF_SettingsCategory.h"
#include "OnGameUserSettingsCallbackDelegate.h"
#include "OnMonitorChangedCallbackDelegate.h"
#include "SF_SettingsData.h"
#include "ConfigurableGameUserSettings.generated.h"

UCLASS()
class SANDFALL_API UConfigurableGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FSF_SettingsData SettingsData;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FOnGameUserSettingsCallback OnSettingsApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FOnGameUserSettingsCallback OnGraphicSettingsApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FOnMonitorChangedCallback OnMonitorChanged;
    
    UPROPERTY(Config)
    FString CurrentSelectedMonitorIDName;
    
    UPROPERTY(Config)
    FString CurrentSelectedUpscaler;
    
    UPROPERTY(Config)
    int32 CurrentSelectedUpscalerQualityMode;
    
    UPROPERTY(Config)
    FString UserConfigHardwareProfile;
    
public:
    UConfigurableGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUserInterfaceVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerUsedValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerQualityModeUsedValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesSize(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialEffectsVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedDisplayMonitor(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNotFocusedVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuUltrawideConstrain(FIntPoint Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertCameraYaw(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertCameraPitch(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIntConsoleVariable(const FString& CVarName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGammaValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGameCulture(const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatConsoleVariable(const FString& CVarName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableVignette(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTutorials(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubtitlesSpeakerPersonalColor(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubtitlesSpeakerDisplay(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubtitles(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePersistentCenterDot(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMotionBlur(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldInputToSprint(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldInputToAim(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFilmGrain(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCustomizationDuringCinematics(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableControllerForceFeedback(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableChromaticAberration(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraShakes(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraMovement(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetContrastValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleGraphicPreset(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVisionDeficiencyCorrectionSeverity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVisionDeficiency(EColorVisionDeficiency Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryToDefaults(ESF_SettingsCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraYawInputMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPitchInputMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraInputMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightnessValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleUltrawideConstrain(FIntPoint Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticBattleQTE(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioGameCulture(const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    void SetApplicationScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetCategoryToCurrentSettings(ESF_SettingsCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void RequestGameplayFrameRateLimit(float InLimit);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayFrameRateLimit();
    
private:
    UFUNCTION(BlueprintPure)
    bool IsPendingScalabilityChangesAtSameQuality() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetUserInterfaceVolume() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalerUsedValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpscalerQualityModeUsedValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSupportedResolutionForCurrentMonitor(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintPure)
    int32 GetSubtitlesSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpecialEffectsVolume() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void GetSelectedUpscalerShouldLockScreenPercentage(bool& ShouldLockScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedUpscalerQualityModeScreenPercentage(float& ScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedUpscalerInfo(bool& ShouldLockScreenPercentage, int32& DefaultSelectedQualityMode);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetSelectedDisplayMonitor() const;
    
    UFUNCTION(BlueprintPure)
    float GetNotFocusedVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetMenuUltrawideConstrain() const;
    
    UFUNCTION(BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastGPUHardwareBenchmarkResult() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastCPUHardwareBenchmarkResult() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertCameraYaw() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertCameraPitch() const;
    
    UFUNCTION(BlueprintPure)
    float GetGammaValue() const;
    
    UFUNCTION(BlueprintPure)
    FString GetGameCulture() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFloatConsoleVariable(const FString& CVarName);
    
    UFUNCTION(BlueprintPure)
    bool GetEnableVignette() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableTutorials() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableSubtitlesSpeakerPersonalColor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableSubtitlesSpeakerDisplay() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableSubtitles() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnablePersistentCenterDot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableMotionBlur() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableHoldInputToSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableHoldInputToAim() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableFilmGrain() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableCustomizationDuringCinematics() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableControllerForceFeedback() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableChromaticAberration() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableCameraShakes() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableCameraMovement() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableAutomaticBattleQTE() const;
    
    UFUNCTION(BlueprintPure)
    float GetContrastValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetConsoleGraphicPreset() const;
    
    UFUNCTION(BlueprintPure)
    float GetColorVisionDeficiencyCorrectionSeverity() const;
    
    UFUNCTION(BlueprintPure)
    EColorVisionDeficiency GetColorVisionDeficiency() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraYawInputMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraPitchInputMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraInputMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetBrightnessValue() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetBattleUltrawideConstrain() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetAvailableUpscaler();
    
private:
    UFUNCTION(BlueprintPure)
    TMap<int32, FText> GetAvailableQualityModeFromCurrentSelectedUpscaler();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetAvailableMonitorDisplayName(TArray<FText>& MonitorsName);
    
    UFUNCTION(BlueprintPure)
    FString GetAudioGameCulture() const;
    
    UFUNCTION(BlueprintPure)
    float GetApplicationScale() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckForFirstLaunchBenchmark();
    
};

