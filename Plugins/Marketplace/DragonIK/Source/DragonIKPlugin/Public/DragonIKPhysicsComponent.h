#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "Curves/CurveFloat.h"
#include "DragonData_PhysicsHandleMultiplier.h"
#include "DragonIKPhysicsComponent.generated.h"

class ADragonIKPhysicsHolder;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    ADragonIKPhysicsHolder* handler_holder;
    
    UPROPERTY(EditAnywhere)
    int32 physanim_tag_index;
    
    UPROPERTY(EditAnywhere)
    FName Custom_Root_Bone;
    
    UPROPERTY(EditAnywhere, Replicated)
    TArray<FName> individual_bone_selection;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Influence_Stopping_Bones;
    
    UPROPERTY(EditAnywhere)
    TArray<FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Linear_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Angular_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Linear_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Angular_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    float Teleport_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool parent_child_ragdoll_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> Parent_Child_Connection_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_auto_blending_logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Autoblendalpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool modify_physics_states;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Hit_Enable_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Hit_Disable_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float hit_delay_time;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Physanim_Enter_Curve;
    
    UPROPERTY(EditAnywhere)
    bool blend_to_zero;
    
    UDragonIKPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSpecificPhysanimData(FName BoneName, int32 linear_strength_var, int32 angular_strength_var, int32 linear_damp_var, int32 angular_damp_var);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolation(int32 inter_value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetInterpolation(int32 inter_value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_OnHitCallback(const FName Optional_Override_Hit_Bone_Name);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Modify_Reset_Bone_Info(const TArray<FName>& bone_list);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_DragonIKSimulatePhysics(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_CacheSimulationStates();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(BlueprintCallable)
    void ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(BlueprintCallable)
    void PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(BlueprintCallable)
    void OnHitCallback(const FHitResult& Hit, FName Optional_Override_Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_SetInterpolation(int32 inter_value);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_OnHitCallback(const FName Optional_Override_Hit_Bone_Name);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_Modify_Reset_Bone_Info(const TArray<FName>& bone_list);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_DragonIKSimulatePhysics(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void Multicast_CacheSimulationStates();
    
    UFUNCTION(BlueprintCallable)
    void Modify_Reset_Bone_Info(TArray<FName> bone_list);
    
    UFUNCTION(BlueprintCallable)
    void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable)
    void Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void CacheSimulationStates();
    
};

