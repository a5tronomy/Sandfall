#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LTweenManager.generated.h"

class ULTweenManager;
class ULTweener;
class UObject;

UCLASS(BlueprintType, Transient)
class LTWEEN_API ULTweenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<ULTweener*> tweenerList;
    
public:
    ULTweenManager();

    UFUNCTION(BlueprintCallable)
    void ManualTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void KillAllTweens(bool callComplete);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULTweenManager* GetLTweenInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableTick();
    
    UFUNCTION(BlueprintCallable)
    void DisableTick();
    
    UFUNCTION(BlueprintCallable)
    void CustomTick(float DeltaTime);
    
};

