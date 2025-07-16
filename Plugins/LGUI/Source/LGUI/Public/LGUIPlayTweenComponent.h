#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIPrefabInterface.h"
#include "LGUIPlayTweenComponent.generated.h"

class ULGUIPlayTween;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIPlayTweenComponent : public UActorComponent, public ILGUIPrefabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool playOnStart;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULGUIPlayTween* playTween;
    
public:
    ULGUIPlayTweenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintPure)
    ULGUIPlayTween* GetPlayTween() const;
    

    // Fix for true pure virtual functions not being implemented
};

