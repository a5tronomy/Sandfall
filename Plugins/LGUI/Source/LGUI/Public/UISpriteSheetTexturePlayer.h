#pragma once
#include "CoreMinimal.h"
#include "LGUIImageSequencePlayer.h"
#include "UISpriteSheetTexturePlayer.generated.h"

class UUITexture;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISpriteSheetTexturePlayer : public ULGUIImageSequencePlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUITexture> Texture;
    
    UPROPERTY(EditAnywhere)
    int32 widthCount;
    
    UPROPERTY(EditAnywhere)
    int32 heightCount;
    
public:
    UUISpriteSheetTexturePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthCount(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightCount(int32 Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetWidthCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeightCount() const;
    
};

