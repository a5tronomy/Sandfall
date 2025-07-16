#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeReference.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/AnimNodeReference.h"
#include "KawaiiPhysicsReference.h"
#include "KawaiiPhysicsSettings.h"
#include "KawaiiPhysicsLibrary.generated.h"

UCLASS(BlueprintType)
class KAWAIIPHYSICS_API UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKawaiiPhysicsLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, UPARAM(Ref) FKawaiiPhysicsSettings& PhysicsSettings);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool NeedWarmUp);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool EnableWind);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool AllowWorldCollision);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static FKawaiiPhysicsSettings GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static FVector GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static void ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

