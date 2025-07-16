#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LGUILifeCycleBehaviour.generated.h"

class AActor;
class ULGUIPrefab;
class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUILifeCycleBehaviour : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool Enable;
    
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> RootComp;
    
public:
    ULGUILifeCycleBehaviour(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnable(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanExecuteUpdate(bool Value);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnEnable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDisable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDestroy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAwake();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* InstantiatePrefabWithTransform(ULGUIPrefab* OriginObject, USceneComponent* Parent, FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    AActor* InstantiatePrefab(ULGUIPrefab* OriginObject, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    AActor* InstantiateActor(AActor* OriginObject, USceneComponent* Parent);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetRootSceneComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsActiveAndEnable() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnable() const;
    
};

