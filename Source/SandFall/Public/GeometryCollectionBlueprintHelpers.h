#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "GeometryCollectionBlueprintHelpers.generated.h"

class AActor;
class UActorComponent;
class UGeometryCollection;
class UGeometryCollectionComponent;
class UMaterialInterface;
class UObject;

UCLASS(BlueprintType)
class SANDFALL_API UGeometryCollectionBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryCollectionBlueprintHelpers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnGeometryCollectionWithRestCollection(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, UGeometryCollection* InRestCollection, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    static UGeometryCollectionComponent* SpawnGeometryCollectionComponentWithRestCollection(AActor* OwnerActor, UGeometryCollection* InRestCollection, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionResponseToChannel(UGeometryCollectionComponent* GeometryCollectionComponent, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    static void RecreatePhysicsState(UActorComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static TArray<UMaterialInterface*> GetGeometryCollectionMaterials(UGeometryCollection* GeometryCollection);
    
};

