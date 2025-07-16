#include "DragonIKWeaponPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UDragonIKWeaponPhysicsComponent::UDragonIKWeaponPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->weapon_input_component = NULL;
    this->read_this = TEXT("A description on how to use the dragonik weapon handler component");
    this->Max_Arm_Length_Percent = 1.00f;
    this->physanim_tag_index = 1;
    this->Linear_Strength = 500;
    this->Angular_Strength = 500;
    this->Linear_Damp = 50;
    this->Angular_Damp = 50;
    this->Interpolation_Speed = 10;
    this->unfreeze_speed = 1.00f;
    this->is_grabbing = false;
    this->Teleport_Distance = 100.00f;
}

void UDragonIKWeaponPhysicsComponent::Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
}

void UDragonIKWeaponPhysicsComponent::Unfreeze_Elbows_Function(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::Server_Weapon_Transform_Override_Implementation(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Weapon_Transform_Override_Validate(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Unfreeze_Elbows_Function_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Unfreeze_Elbows_Function_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Release_Weapon_Implementation(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Release_Weapon_Validate(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Plus_Override_Implementation(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Plus_Override_Validate(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Only_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Only_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Grab_Weapon_Implementation(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Grab_Weapon_Validate(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Freeze_Elbows_Function_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Freeze_Elbows_Function_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_FirstTimeInitialization_Implementation(USkeletalMeshComponent* skeleton_input) {
}
bool UDragonIKWeaponPhysicsComponent::Server_FirstTimeInitialization_Validate(USkeletalMeshComponent* skeleton_input) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_EnableWeaponsArms_Implementation() {
}
bool UDragonIKWeaponPhysicsComponent::Server_EnableWeaponsArms_Validate() {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_DisableWeaponsArms_Implementation(bool reset_weapon_transform) {
}
bool UDragonIKWeaponPhysicsComponent::Server_DisableWeaponsArms_Validate(bool reset_weapon_transform) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Destroy_Weapon_Implementation(AActor* weapon) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Destroy_Weapon_Validate(AActor* weapon) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Server_Attach_Hand_Only_Implementation(FName hand_bone, bool arm_position_recalibrate) {
}
bool UDragonIKWeaponPhysicsComponent::Server_Attach_Hand_Only_Validate(FName hand_bone, bool arm_position_recalibrate) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
}

void UDragonIKWeaponPhysicsComponent::Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
}

void UDragonIKWeaponPhysicsComponent::Release_Hand_Only(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::Multicast_Weapon_Transform_Override_Implementation(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Weapon_Transform_Override_Validate(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Unfreeze_Elbows_Function_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Unfreeze_Elbows_Function_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Release_Weapon_Implementation(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Release_Weapon_Validate(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Plus_Override_Implementation(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Plus_Override_Validate(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Only_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Only_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Grab_Weapon_Implementation(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Grab_Weapon_Validate(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Freeze_Elbows_Function_Implementation(FName hand_bone) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Freeze_Elbows_Function_Validate(FName hand_bone) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_FirstTimeInitialization_Implementation(USkeletalMeshComponent* skeleton_input) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_FirstTimeInitialization_Validate(USkeletalMeshComponent* skeleton_input) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_EnableWeaponsArms_Implementation() {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_EnableWeaponsArms_Validate() {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_DisableWeaponsArms_Implementation(bool reset_weapon_transform) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_DisableWeaponsArms_Validate(bool reset_weapon_transform) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Destroy_Weapon_Implementation(AActor* weapon) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Destroy_Weapon_Validate(AActor* weapon) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Multicast_Attach_Hand_Only_Implementation(FName hand_bone, bool arm_position_recalibrate) {
}
bool UDragonIKWeaponPhysicsComponent::Multicast_Attach_Hand_Only_Validate(FName hand_bone, bool arm_position_recalibrate) {
    return true;
}

void UDragonIKWeaponPhysicsComponent::Grab_Weapon(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName) {
}

void UDragonIKWeaponPhysicsComponent::Freeze_Elbows_Function(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input) {
}

void UDragonIKWeaponPhysicsComponent::EnableWeaponsArms() {
}

void UDragonIKWeaponPhysicsComponent::DisableWeaponsArms(bool reset_weapon_transform) {
}

void UDragonIKWeaponPhysicsComponent::Destroy_Weapon(AActor* weapon) {
}

void UDragonIKWeaponPhysicsComponent::Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate) {
}

void UDragonIKWeaponPhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDragonIKWeaponPhysicsComponent, weapon_input_component);
}


