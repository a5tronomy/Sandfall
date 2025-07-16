#include "ALSAnimNotifyFootstep.h"

UALSAnimNotifyFootstep::UALSAnimNotifyFootstep() {
    this->HitDataTable = NULL;
    this->FootSocketName = TEXT("Foot_R");
    this->TraceChannel = TraceTypeQuery1;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->TraceLength = 50.00f;
    this->bSpawnDecal = false;
    this->bMirrorDecalX = false;
    this->bMirrorDecalY = false;
    this->bMirrorDecalZ = false;
    this->bSpawnSound = true;
    this->SoundParameterName = TEXT("FootstepType");
    this->FootstepType = EALSFootstepType::Step;
    this->bOverrideMaskCurve = false;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bSpawnNiagara = false;
}


