#include "SF_SettingsData.h"

FSF_SettingsData::FSF_SettingsData() {
    this->bEnableSubtitles = false;
    this->SubtitlesSize = 0;
    this->bEnableSubtitlesSpeakerDisplay = false;
    this->bEnableSubtitlesSpeakerPersonalColor = false;
    this->bEnableTutorials = false;
    this->bEnableCustomizationDuringCinematics = false;
    this->bEnableControllerForceFeedback = false;
    this->bInvertCameraPitch = false;
    this->bInvertCameraYaw = false;
    this->CameraYawInputMultiplier = 0.00f;
    this->CameraPitchInputMultiplier = 0.00f;
    this->CameraInputMultiplier = 0.00f;
    this->bEnableHoldInputToSprint = false;
    this->bEnableHoldInputToAim = false;
    this->MasterVolume = 0.00f;
    this->MusicVolume = 0.00f;
    this->VoiceVolume = 0.00f;
    this->UserInterfaceVolume = 0.00f;
    this->SpecialEffectsVolume = 0.00f;
    this->NotFocusedVolume = 0.00f;
    this->bEnableMotionBlur = false;
    this->bEnableFilmGrain = false;
    this->bEnableChromaticAberration = false;
    this->bEnableVignette = false;
    this->GammaValue = 0.00f;
    this->ContrastValue = 0.00f;
    this->BrightnessValue = 0.00f;
    this->bEnableCameraShakes = false;
    this->bCameraMovement = false;
    this->bPersistentCenterDot = false;
    this->bEnableAutomaticBattleQTE = false;
    this->ColorVisionDeficiency = EColorVisionDeficiency::NormalVision;
    this->ColorVisionDeficiencyCorrectionSeverity = 0.00f;
    this->ApplicationScale = 0.00f;
    this->ConsoleGraphicPreset = 0;
}

