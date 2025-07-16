#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIProceduralRectData.generated.h"

class UMaterialInterface;
class UTexture;

UCLASS()
class LGUI_API ULGUIProceduralRectData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultMaterials[3];
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTexture* Texture;
    
public:
    ULGUIProceduralRectData();

};

