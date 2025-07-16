#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rendering/RenderingCommon.h"
#include "SF_SettingsData.generated.h"

USTRUCT(BlueprintType)
struct FSF_SettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableSubtitles;
    
    UPROPERTY(EditAnywhere)
    int32 SubtitlesSize;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSubtitlesSpeakerDisplay;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSubtitlesSpeakerPersonalColor;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTutorials;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCustomizationDuringCinematics;
    
    UPROPERTY(EditAnywhere)
    bool bEnableControllerForceFeedback;
    
    UPROPERTY(EditAnywhere)
    bool bInvertCameraPitch;
    
    UPROPERTY(EditAnywhere)
    bool bInvertCameraYaw;
    
    UPROPERTY(EditAnywhere)
    float CameraYawInputMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CameraPitchInputMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CameraInputMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bEnableHoldInputToSprint;
    
    UPROPERTY(EditAnywhere)
    bool bEnableHoldInputToAim;
    
    UPROPERTY(EditAnywhere)
    float MasterVolume;
    
    UPROPERTY(EditAnywhere)
    float MusicVolume;
    
    UPROPERTY(EditAnywhere)
    float VoiceVolume;
    
    UPROPERTY(EditAnywhere)
    float UserInterfaceVolume;
    
    UPROPERTY(EditAnywhere)
    float SpecialEffectsVolume;
    
    UPROPERTY(EditAnywhere)
    float NotFocusedVolume;
    
    UPROPERTY(EditAnywhere)
    bool bEnableMotionBlur;
    
    UPROPERTY(EditAnywhere)
    bool bEnableFilmGrain;
    
    UPROPERTY(EditAnywhere)
    bool bEnableChromaticAberration;
    
    UPROPERTY(EditAnywhere)
    bool bEnableVignette;
    
    UPROPERTY(EditAnywhere)
    float GammaValue;
    
    UPROPERTY(EditAnywhere)
    float ContrastValue;
    
    UPROPERTY(EditAnywhere)
    float BrightnessValue;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCameraShakes;
    
    UPROPERTY(EditAnywhere)
    bool bCameraMovement;
    
    UPROPERTY(EditAnywhere)
    bool bPersistentCenterDot;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutomaticBattleQTE;
    
    UPROPERTY(EditAnywhere)
    EColorVisionDeficiency ColorVisionDeficiency;
    
    UPROPERTY(EditAnywhere)
    float ColorVisionDeficiencyCorrectionSeverity;
    
    UPROPERTY(EditAnywhere)
    float ApplicationScale;
    
    UPROPERTY(EditAnywhere)
    FIntPoint MenuUltrawideConstrain;
    
    UPROPERTY(EditAnywhere)
    FIntPoint BattleUltrawideConstrain;
    
    UPROPERTY()
    int32 ConsoleGraphicPreset;
    
    SANDFALL_API FSF_SettingsData();
};

