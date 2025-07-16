#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBlockoutMaterialType.h"
#include "BlockoutToolsParent.generated.h"

class UBillboardComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class BLOCKOUTTOOLSPLUGIN_API ABlockoutToolsParent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInterface* BlockoutGridParent;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceDynamic* BlockoutGridMID;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInterface* BlockoutCurrentMaterial;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UStaticMeshComponent*> BlockoutMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBlockoutMaterialType> BlockoutMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BlockoutMaterialColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutMaterialUseGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutWorldAligned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockoutMaterialGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockoutMaterialCheckerLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockoutMaterialRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutMaterialUseTopColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BlockoutMaterialTopColor;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUseCustomMaterial;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInterface* CustomMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* BlockoutCustomMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutEnableCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutEnableCustomCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BlockoutCustomCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockoutCastShadows;
    
    ABlockoutToolsParent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RerunConstructionScript();
    
    UFUNCTION(BlueprintCallable)
    void BlockoutSetMaterial();
    
};

