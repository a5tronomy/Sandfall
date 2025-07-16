#pragma once
#include "CoreMinimal.h"
#include "LGUIImageSequencePlayer.h"
#include "UISpriteSequencePlayer.generated.h"

class ULGUISpriteData_BaseObject;
class UUISpriteBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISpriteSequencePlayer : public ULGUIImageSequencePlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISpriteBase> Sprite;
    
    UPROPERTY(EditAnywhere)
    TArray<ULGUISpriteData_BaseObject*> spriteSequence;
    
    UPROPERTY(EditAnywhere)
    bool snapSpriteSize;
    
public:
    UUISpriteSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpriteSequence(TArray<ULGUISpriteData_BaseObject*> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSnapSpriteSize(bool Value);
    
    UFUNCTION(BlueprintPure)
    TArray<ULGUISpriteData_BaseObject*> GetSpriteSequence() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSnapSpriteSize() const;
    
};

