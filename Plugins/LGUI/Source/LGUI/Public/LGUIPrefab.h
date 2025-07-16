#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIPrefab_LoadPrefabCallbackDelegate.h"
#include "LGUIPrefab.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class LGUI_API ULGUIPrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 PrefabVersion;
    
    UPROPERTY()
    uint16 EngineMajorVersion;
    
    UPROPERTY()
    uint16 EngineMinorVersion;
    
    UPROPERTY()
    uint16 EnginePatchVersion;
    
    UPROPERTY()
    int32 ArchiveVersion_ForBuild;
    
    UPROPERTY()
    int32 ArchiveVersionUE5_ForBuild;
    
    UPROPERTY()
    int32 ArchiveLicenseeVer_ForBuild;
    
    UPROPERTY()
    uint32 ArEngineNetVer_ForBuild;
    
    UPROPERTY()
    uint32 ArGameNetVer_ForBuild;
    
    UPROPERTY()
    TArray<UObject*> ReferenceAssetListForBuild;
    
    UPROPERTY()
    TArray<UClass*> ReferenceClassListForBuild;
    
    UPROPERTY()
    TArray<FName> ReferenceNameListForBuild;
    
    UPROPERTY()
    TArray<uint8> BinaryDataForBuild;
    
    ULGUIPrefab();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AActor* LoadPrefabWithTransform(UObject* WorldContextObject, USceneComponent* InParent, FVector Location, FRotator Rotation, FVector Scale, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AActor* LoadPrefabWithReplacement(UObject* WorldContextObject, USceneComponent* InParent, const TMap<UObject*, UObject*>& InReplaceAssetMap, const TMap<UClass*, UClass*>& InReplaceClassMap, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AActor* LoadPrefab(UObject* WorldContextObject, USceneComponent* InParent, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake, bool SetRelativeTransformToIdentity);
    
};

