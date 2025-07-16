#include "ALSCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ALSAIController.h"

AALSCharacter::AALSCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIControllerClass = AALSAIController::StaticClass();
    this->HeldObjectRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HeldObjectRoot"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->HeldObjectRoot->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SkeletalMesh->SetupAttachment(HeldObjectRoot);
    this->StaticMesh->SetupAttachment(HeldObjectRoot);
}



void AALSCharacter::ClearHeldObject() {
}

void AALSCharacter::AttachToHand(UStaticMesh* NewStaticMesh, USkeletalMesh* NewSkeletalMesh, UClass* NewAnimClass, bool bLeftHand, FVector Offset) {
}


