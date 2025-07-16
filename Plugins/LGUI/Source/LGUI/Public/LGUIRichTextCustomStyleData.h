#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIRichTextCustomStyleItemData.h"
#include "LGUIRichTextCustomStyleData.generated.h"

UCLASS(BlueprintType)
class LGUI_API ULGUIRichTextCustomStyleData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FName, FLGUIRichTextCustomStyleItemData> DataMap;
    
public:
    ULGUIRichTextCustomStyleData();

    UFUNCTION(BlueprintPure)
    TMap<FName, FLGUIRichTextCustomStyleItemData> GetDataMap() const;
    
};

