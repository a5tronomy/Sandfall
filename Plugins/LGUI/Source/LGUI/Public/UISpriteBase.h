#pragma once
#include "CoreMinimal.h"
#include "UIBatchMeshRenderable.h"
#include "UISpriteRenderableInterface.h"
#include "UISpriteBase.generated.h"

class ULGUISpriteData_BaseObject;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISpriteBase : public UUIBatchMeshRenderable, public IUISpriteRenderableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* Sprite;
    
public:
    UUISpriteBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSprite(ULGUISpriteData_BaseObject* NewSprite, bool SetSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeFromSpriteData();
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetSprite() const;
    

    // Fix for true pure virtual functions not being implemented
};

