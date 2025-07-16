#include "SF_InvisibleWall.h"

ASF_InvisibleWall::ASF_InvisibleWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMustBeIgnoredInCommandlet = false;
    this->CurrentWallVersion = 0;
    this->bShouldAffectNavigation = true;
    this->bClosedLoop = false;
    this->bRemoveNavigationMeshInClosedLoop = false;
    this->bHasWarnMissingBakedData = false;
    this->BakedInvisibleWall = NULL;
    this->WallPrefab = NULL;
    this->CornerPrefab = NULL;
}

bool ASF_InvisibleWall::TryBakeInvisibleWall(bool ForceBake) {
    return false;
}

bool ASF_InvisibleWall::IsBakeVersionOutDated() {
    return false;
}

bool ASF_InvisibleWall::HasBakedData() {
    return false;
}

TArray<ASF_GeneratedInvisibleWallBase*> ASF_InvisibleWall::GetGeneratedInvisibleWalls() {
    return TArray<ASF_GeneratedInvisibleWallBase*>();
}


