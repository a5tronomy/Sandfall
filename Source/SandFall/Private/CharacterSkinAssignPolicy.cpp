#include "CharacterSkinAssignPolicy.h"
#include "Templates/SubclassOf.h"

UCharacterSkinAssignPolicy::UCharacterSkinAssignPolicy() {
}

void UCharacterSkinAssignPolicy::OnSkinAssignPolicyDestroyed() {
}

void UCharacterSkinAssignPolicy::InitSkinAssignPolicy() {
}

void UCharacterSkinAssignPolicy::AssignFaceSkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& FaceSkinClass) {
}

void UCharacterSkinAssignPolicy::AssignFaceSkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& FaceSkinClass) {
}

void UCharacterSkinAssignPolicy::AssignBodySkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& BodySkinClass) {
}

void UCharacterSkinAssignPolicy::AssignBodySkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& BodySkinClass) {
}

void UCharacterSkinAssignPolicy::AssignBodyAndFaceSkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& BodySkinClass, const TSoftClassPtr<AActor>& FaceSkinClass) {
}

void UCharacterSkinAssignPolicy::AssignBodyAndFaceSkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& BodySkinClass, const TSubclassOf<AActor>& FaceSkinClass) {
}


