#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELGUIRichTextCustomStyleData_ColorType.h"
#include "ELGUIRichTextCustomStyleData_SizeType.h"
#include "ELGUIRichTextCustomStyleData_SupOrSubType.h"
#include "LGUIRichTextCustomStyleItemData.generated.h"

USTRUCT(BlueprintType)
struct FLGUIRichTextCustomStyleItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Bold;
    
    UPROPERTY(EditAnywhere)
    bool Italic;
    
    UPROPERTY(EditAnywhere)
    bool underline;
    
    UPROPERTY(EditAnywhere)
    bool strikethrough;
    
    UPROPERTY(EditAnywhere)
    ELGUIRichTextCustomStyleData_SizeType SizeType;
    
    UPROPERTY(EditAnywhere)
    int32 Size;
    
    UPROPERTY(EditAnywhere)
    ELGUIRichTextCustomStyleData_ColorType colorType;
    
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    ELGUIRichTextCustomStyleData_SupOrSubType supOrSub;
    
    LGUI_API FLGUIRichTextCustomStyleItemData();
};

