#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALSBaseCharacter.h"
#include "ALSCharacter.generated.h"

class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class ALSV4_CPP_API AALSCharacter : public AALSBaseCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* HeldObjectRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMesh;
    
    AALSCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeldObjectAnimations();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeldObject();
    
    UFUNCTION(BlueprintCallable)
    void ClearHeldObject();
    
    UFUNCTION(BlueprintCallable)
    void AttachToHand(UStaticMesh* NewStaticMesh, USkeletalMesh* NewSkeletalMesh, UClass* NewAnimClass, bool bLeftHand, FVector Offset);
    
};

