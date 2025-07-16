#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIPrefabInterface.h"
#include "LGUIImageSequencePlayer.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIImageSequencePlayer : public UActorComponent, public ILGUIPrefabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FPS;
    
    UPROPERTY(EditAnywhere)
    bool Loop;
    
    UPROPERTY(EditAnywhere)
    bool playOnStart;
    
    UPROPERTY(EditAnywhere)
    bool affectByGamePause;
    
    UPROPERTY(EditAnywhere)
    bool affectByTimeDilation;
    
public:
    ULGUIImageSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFps(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SeekTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SeekFrame(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintPure)
    bool GetLoop() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    float GetFps() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    

    // Fix for true pure virtual functions not being implemented
};

