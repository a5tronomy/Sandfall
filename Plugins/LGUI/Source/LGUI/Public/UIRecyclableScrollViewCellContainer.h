#pragma once
#include "CoreMinimal.h"
#include "UIRecyclableScrollViewCellContainer.generated.h"

class UActorComponent;
class UUIItem;

USTRUCT(BlueprintType)
struct FUIRecyclableScrollViewCellContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UActorComponent* CellComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUIItem* UIItem;
    
    LGUI_API FUIRecyclableScrollViewCellContainer();
};

