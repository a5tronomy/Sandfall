#include "ALSHitFX.h"

FALSHitFX::FALSHitFX() {
    this->SurfaceType = SurfaceType_Default;
    this->SoundSpawnType = EALSSpawnType::Location;
    this->SoundAttachmentType = EAttachLocation::KeepRelativeOffset;
    this->DecalSpawnType = EALSSpawnType::Location;
    this->DecalAttachmentType = EAttachLocation::KeepRelativeOffset;
    this->DecalLifeSpan = 0.00f;
    this->NiagaraSpawnType = EALSSpawnType::Location;
    this->NiagaraAttachmentType = EAttachLocation::KeepRelativeOffset;
}

