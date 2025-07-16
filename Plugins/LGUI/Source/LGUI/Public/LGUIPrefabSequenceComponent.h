#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "LGUIComponentReference.h"
#include "LGUIPrefabInterface.h"
#include "LGUIPrefabSequenceComponent.generated.h"

class ULGUIPrefabSequence;
class ULGUIPrefabSequencePlayer;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIPrefabSequenceComponent : public UActorComponent, public ILGUIPrefabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<ULGUIPrefabSequence*> SequenceArray;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentSequenceIndex;
    
    UPROPERTY()
    FLGUIComponentReference SequenceEventHandler;
    
    UPROPERTY(Transient)
    ULGUIPrefabSequencePlayer* SequencePlayer;
    
public:
    ULGUIPrefabSequenceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSequenceByName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceByDisplayName(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void InitSequencePlayer();
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefabSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefabSequence* GetSequenceByName(FName InName) const;
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefabSequence* GetSequenceByIndex(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefabSequence* GetSequenceByDisplayName(const FString& InName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ULGUIPrefabSequence*> GetSequenceArray() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentSequenceIndex() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefabSequence* GetCurrentSequence() const;
    

    // Fix for true pure virtual functions not being implemented
};

