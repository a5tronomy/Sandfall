#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELGUIGeometryModifierHelper_UITextModifyPositionType.h"
#include "LGUIGeometryHelper.h"
#include "LGUIGeometryModifierHelper.generated.h"

class UUIText;

UCLASS()
class LGUI_API ULGUIGeometryModifierHelper : public ULGUIGeometryHelper {
    GENERATED_BODY()
public:
    ULGUIGeometryModifierHelper();

    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Transform(UUIText* InUIText, int32 InCharIndex, ELGUIGeometryModifierHelper_UITextModifyPositionType InPositionType, const FVector& InPosition, const FRotator& InRotator, const FVector& InScale);
    
    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Scale(UUIText* InUIText, int32 InCharIndex, const FVector& InScale);
    
    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Rotate(UUIText* InUIText, int32 InCharIndex, const FRotator& InRotator);
    
    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Position(UUIText* InUIText, int32 InCharIndex, const FVector& InPosition, ELGUIGeometryModifierHelper_UITextModifyPositionType InPositionType);
    
    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Color(UUIText* InUIText, int32 InCharIndex, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void UITextHelperFunction_ModifyCharGeometry_Alpha(UUIText* InUIText, int32 InCharIndex, const float& InAlpha);
    
    UFUNCTION(BlueprintPure)
    float UITextHelperFunction_GetCharHorizontalPositionRatio01(UUIText* InUIText, int32 InCharIndex) const;
    
    UFUNCTION(BlueprintPure)
    void UITextHelperFunction_GetCharGeometry_AbsolutePosition(UUIText* InUIText, int32 InCharIndex, FVector& OutPosition) const;
    
};

