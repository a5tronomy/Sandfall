#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SF_InvisibleWall.generated.h"

class ASF_GeneratedInvisibleWallBase;
class UPrimitiveComponent;

UCLASS(Abstract)
class SANDFALL_API ASF_InvisibleWall : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    bool bMustBeIgnoredInCommandlet;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 CurrentWallVersion;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bShouldAffectNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bClosedLoop;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bRemoveNavigationMeshInClosedLoop;
    
public:
    UPROPERTY(Transient)
    bool bHasWarnMissingBakedData;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* BakedInvisibleWall;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<ASF_GeneratedInvisibleWallBase>> GeneratedInvisibleWalls;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UPrimitiveComponent*> WallCollection;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UPrimitiveComponent*> WallDynamicCollection;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UPrimitiveComponent*> CornerCollection;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UPrimitiveComponent*> CornerDynamicCollection;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASF_GeneratedInvisibleWallBase> WallPrefab;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASF_GeneratedInvisibleWallBase> CornerPrefab;
    
public:
    ASF_InvisibleWall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryBakeInvisibleWall(bool ForceBake);
    
    UFUNCTION(BlueprintPure)
    bool IsBakeVersionOutDated();
    
    UFUNCTION(BlueprintPure)
    bool HasBakedData();
    
    UFUNCTION(BlueprintCallable)
    TArray<ASF_GeneratedInvisibleWallBase*> GetGeneratedInvisibleWalls();
    
};

