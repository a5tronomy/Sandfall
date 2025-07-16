#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "NamedID.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UNamedID : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UNamedID();

};

