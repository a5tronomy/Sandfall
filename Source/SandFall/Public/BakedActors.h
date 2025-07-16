#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "BakedActors.generated.h"

UCLASS(Abstract)
class SANDFALL_API ABakedActors : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSoftObjectPtr<AActor>> BakedActors;
    
public:
    ABakedActors(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryDestroyAllBakedActors();
    
    UFUNCTION(BlueprintPure)
    bool HasAnyBakedActor() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    TArray<FTransform> GetBakedActorTransforms();
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetBakedActorsFolderName();
    
    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<AActor> GetActorClassToSpawn();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BakeActors();
    
};

