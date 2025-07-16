#include "DragonIKPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UDragonIKPhysicsComponent::UDragonIKPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->handler_holder = NULL;
    this->physanim_tag_index = 1;
    this->Custom_Root_Bone = TEXT("Pelvis");
    this->individual_bone_selection.AddDefaulted(6);
    this->Influence_Stopping_Bones.AddDefaulted(1);
    this->Linear_Strength = 1000;
    this->Angular_Strength = 1000;
    this->Linear_Damp = 5;
    this->Angular_Damp = 5;
    this->Interpolation_Speed = 10;
    this->Teleport_Distance = 500.00f;
    this->parent_child_ragdoll_state = false;
    this->use_auto_blending_logic = true;
    this->Autoblendalpha = 1.00f;
    this->modify_physics_states = false;
    this->Hit_Enable_Speed = 5.00f;
    this->Hit_Disable_Speed = 5.00f;
    this->hit_delay_time = 1.00f;
    this->blend_to_zero = false;
}

void UDragonIKPhysicsComponent::UpdateSpecificPhysanimData(FName BoneName, int32 linear_strength_var, int32 angular_strength_var, int32 linear_damp_var, int32 angular_damp_var) {
}

void UDragonIKPhysicsComponent::UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
}

void UDragonIKPhysicsComponent::SetInterpolation(int32 inter_value) {
}

void UDragonIKPhysicsComponent::Server_UpdatePhysanimData_Implementation(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
}
bool UDragonIKPhysicsComponent::Server_UpdatePhysanimData_Validate(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
    return true;
}

void UDragonIKPhysicsComponent::Server_SetInterpolation_Implementation(int32 inter_value) {
}
bool UDragonIKPhysicsComponent::Server_SetInterpolation_Validate(int32 inter_value) {
    return true;
}

void UDragonIKPhysicsComponent::Server_ReleaseAllHandles_Implementation(bool go_ragdoll) {
}
bool UDragonIKPhysicsComponent::Server_ReleaseAllHandles_Validate(bool go_ragdoll) {
    return true;
}

void UDragonIKPhysicsComponent::Server_ReGrabAllHandles_Implementation(bool exit_ragdoll) {
}
bool UDragonIKPhysicsComponent::Server_ReGrabAllHandles_Validate(bool exit_ragdoll) {
    return true;
}

void UDragonIKPhysicsComponent::Server_PerformActiveRagdoll_Implementation(float pelvis_mass_override) {
}
bool UDragonIKPhysicsComponent::Server_PerformActiveRagdoll_Validate(float pelvis_mass_override) {
    return true;
}

void UDragonIKPhysicsComponent::Server_OnHitCallback_Implementation(const FName Optional_Override_Hit_Bone_Name) {
}
bool UDragonIKPhysicsComponent::Server_OnHitCallback_Validate(const FName Optional_Override_Hit_Bone_Name) {
    return true;
}

void UDragonIKPhysicsComponent::Server_Modify_Reset_Bone_Info_Implementation(const TArray<FName>& bone_list) {
}
bool UDragonIKPhysicsComponent::Server_Modify_Reset_Bone_Info_Validate(const TArray<FName>& bone_list) {
    return true;
}

void UDragonIKPhysicsComponent::Server_FirstTimeInitialization_Implementation(USkeletalMeshComponent* skeleton_input) {
}
bool UDragonIKPhysicsComponent::Server_FirstTimeInitialization_Validate(USkeletalMeshComponent* skeleton_input) {
    return true;
}

void UDragonIKPhysicsComponent::Server_DragonIKSimulatePhysics_Implementation(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf) {
}
bool UDragonIKPhysicsComponent::Server_DragonIKSimulatePhysics_Validate(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf) {
    return true;
}

void UDragonIKPhysicsComponent::Server_Control_Bone_Handle_Implementation(FName bone_name, FTransform override_transform, bool Enable) {
}
bool UDragonIKPhysicsComponent::Server_Control_Bone_Handle_Validate(FName bone_name, FTransform override_transform, bool Enable) {
    return true;
}

void UDragonIKPhysicsComponent::Server_CacheSimulationStates_Implementation() {
}
bool UDragonIKPhysicsComponent::Server_CacheSimulationStates_Validate() {
    return true;
}

void UDragonIKPhysicsComponent::ReleaseAllHandles(bool go_ragdoll) {
}

void UDragonIKPhysicsComponent::ReGrabAllHandles(bool exit_ragdoll) {
}

void UDragonIKPhysicsComponent::PerformActiveRagdoll(float pelvis_mass_override) {
}

void UDragonIKPhysicsComponent::OnHitCallback(const FHitResult& Hit, FName Optional_Override_Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name) {
}

void UDragonIKPhysicsComponent::Multicast_UpdatePhysanimData_Implementation(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
}
bool UDragonIKPhysicsComponent::Multicast_UpdatePhysanimData_Validate(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_SetInterpolation_Implementation(int32 inter_value) {
}
bool UDragonIKPhysicsComponent::Multicast_SetInterpolation_Validate(int32 inter_value) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_ReleaseAllHandles_Implementation(bool go_ragdoll) {
}
bool UDragonIKPhysicsComponent::Multicast_ReleaseAllHandles_Validate(bool go_ragdoll) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_ReGrabAllHandles_Implementation(bool exit_ragdoll) {
}
bool UDragonIKPhysicsComponent::Multicast_ReGrabAllHandles_Validate(bool exit_ragdoll) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_PerformActiveRagdoll_Implementation(float pelvis_mass_override) {
}
bool UDragonIKPhysicsComponent::Multicast_PerformActiveRagdoll_Validate(float pelvis_mass_override) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_OnHitCallback_Implementation(const FName Optional_Override_Hit_Bone_Name) {
}
bool UDragonIKPhysicsComponent::Multicast_OnHitCallback_Validate(const FName Optional_Override_Hit_Bone_Name) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_Modify_Reset_Bone_Info_Implementation(const TArray<FName>& bone_list) {
}
bool UDragonIKPhysicsComponent::Multicast_Modify_Reset_Bone_Info_Validate(const TArray<FName>& bone_list) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_FirstTimeInitialization_Implementation(USkeletalMeshComponent* skeleton_input) {
}
bool UDragonIKPhysicsComponent::Multicast_FirstTimeInitialization_Validate(USkeletalMeshComponent* skeleton_input) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_DragonIKSimulatePhysics_Implementation(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf) {
}
bool UDragonIKPhysicsComponent::Multicast_DragonIKSimulatePhysics_Validate(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_Control_Bone_Handle_Implementation(FName bone_name, FTransform override_transform, bool Enable) {
}
bool UDragonIKPhysicsComponent::Multicast_Control_Bone_Handle_Validate(FName bone_name, FTransform override_transform, bool Enable) {
    return true;
}

void UDragonIKPhysicsComponent::Multicast_CacheSimulationStates_Implementation() {
}
bool UDragonIKPhysicsComponent::Multicast_CacheSimulationStates_Validate() {
    return true;
}

void UDragonIKPhysicsComponent::Modify_Reset_Bone_Info(TArray<FName> bone_list) {
}

void UDragonIKPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input) {
}

void UDragonIKPhysicsComponent::Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable) {
}

void UDragonIKPhysicsComponent::CacheSimulationStates() {
}

void UDragonIKPhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDragonIKPhysicsComponent, handler_holder);
    DOREPLIFETIME(UDragonIKPhysicsComponent, individual_bone_selection);
}


