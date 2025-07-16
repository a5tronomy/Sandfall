#include "LGUIPrefab.h"

ULGUIPrefab::ULGUIPrefab() {
    this->PrefabVersion = 0;
    this->EngineMajorVersion = 0;
    this->EngineMinorVersion = 0;
    this->EnginePatchVersion = 0;
    this->ArchiveVersion_ForBuild = 522;
    this->ArchiveVersionUE5_ForBuild = -1;
    this->ArchiveLicenseeVer_ForBuild = 0;
    this->ArEngineNetVer_ForBuild = 16;
    this->ArGameNetVer_ForBuild = 0;
}

AActor* ULGUIPrefab::LoadPrefabWithTransform(UObject* WorldContextObject, USceneComponent* InParent, FVector Location, FRotator Rotation, FVector Scale, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake) {
    return NULL;
}

AActor* ULGUIPrefab::LoadPrefabWithReplacement(UObject* WorldContextObject, USceneComponent* InParent, const TMap<UObject*, UObject*>& InReplaceAssetMap, const TMap<UClass*, UClass*>& InReplaceClassMap, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake) {
    return NULL;
}

AActor* ULGUIPrefab::LoadPrefab(UObject* WorldContextObject, USceneComponent* InParent, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake, bool SetRelativeTransformToIdentity) {
    return NULL;
}


