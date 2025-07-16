#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "CharacterFootStepDelegate.h"
#include "DragonIKFootStepsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKFootStepsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCharacterFootStep OnCharacterFootStep;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName read_this;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> foot_socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float foot_enter_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float foot_exit_height;
    
    UDragonIKFootStepsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void CallFootSteps(FName bone_name, FTransform foot_transform, float height_difference, FHitResult hit_info);
    
};

