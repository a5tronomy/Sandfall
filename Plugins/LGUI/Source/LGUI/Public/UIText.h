#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUITextFontStyle.h"
#include "EUITextOverflowType.h"
#include "EUITextParagraphHorizontalAlign.h"
#include "EUITextParagraphVerticalAlign.h"
#include "LGUICultureChangedInterface.h"
#include "LGUILayoutInterface.h"
#include "UIBatchMeshRenderable.h"
#include "UITextCharProperty.h"
#include "UIText_RichTextCustomTag.h"
#include "UIText_RichTextImageTag.h"
#include "UIText.generated.h"

class ULGUIFontData_BaseObject;
class ULGUIRichTextCustomStyleData;
class ULGUIRichTextImageData_BaseObject;
class UUIItem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIText : public UUIBatchMeshRenderable, public ILGUICultureChangedInterface, public ILGUILayoutInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ULGUIFontData_BaseObject* Font;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere)
    bool useKerning;
    
    UPROPERTY(EditAnywhere)
    FVector2D Space;
    
    UPROPERTY(EditAnywhere)
    EUITextParagraphHorizontalAlign HAlign;
    
    UPROPERTY(EditAnywhere)
    EUITextParagraphVerticalAlign VAlign;
    
    UPROPERTY(EditAnywhere)
    EUITextOverflowType overflowType;
    
    UPROPERTY(EditAnywhere)
    bool adjustWidth;
    
    UPROPERTY(EditAnywhere)
    FVector2D adjustWidthRange;
    
    UPROPERTY(EditAnywhere)
    bool adjustHeight;
    
    UPROPERTY(EditAnywhere)
    FVector2D adjustHeightRange;
    
    UPROPERTY(EditAnywhere)
    float maxHorizontalWidth;
    
    UPROPERTY(EditAnywhere)
    EUITextFontStyle fontStyle;
    
    UPROPERTY(EditAnywhere)
    bool richText;
    
    UPROPERTY(EditAnywhere)
    int32 richTextTagFilterFlags;
    
    UPROPERTY(EditAnywhere)
    ULGUIRichTextCustomStyleData* richTextCustomStyleData;
    
    UPROPERTY(EditAnywhere)
    ULGUIRichTextImageData_BaseObject* richTextImageData;
    
    UPROPERTY(AdvancedDisplay, Instanced, Transient, VisibleAnywhere)
    TArray<UUIItem*> createdRichTextImageObjectArray;
    
public:
    UUIText(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseKerning(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& newText);
    
    UFUNCTION(BlueprintCallable)
    void SetRichTextTagFilterFlags(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRichTextImageData(ULGUIRichTextImageData_BaseObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRichTextCustomStyleData(ULGUIRichTextCustomStyleData* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRichText(bool newRichText);
    
    UFUNCTION(BlueprintCallable)
    void SetParagraphVerticalAlignment(EUITextParagraphVerticalAlign newVAlign);
    
    UFUNCTION(BlueprintCallable)
    void SetParagraphHorizontalAlignment(EUITextParagraphHorizontalAlign newHAlign);
    
    UFUNCTION(BlueprintCallable)
    void SetOverflowType(EUITextOverflowType newOverflowType);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHorizontalWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFontStyle(EUITextFontStyle newFontStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSpace(FVector2D NewSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(float NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(ULGUIFontData_BaseObject* newFont);
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustWidth(bool newAdjustWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustHeight(bool newAdjustHeight);
    
    UFUNCTION(BlueprintPure)
    int32 GetVisibleCharCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseKerning() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetTextRealSize() const;
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintPure)
    float GetSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRichTextTagFilterFlags() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIText_RichTextImageTag> GetRichTextImageTagArray() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIRichTextImageData_BaseObject* GetRichTextImageData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIText_RichTextCustomTag> GetRichTextCustomTagArray() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIRichTextCustomStyleData* GetRichTextCustomStyleData() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRichText() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetRealSize();
    
    UFUNCTION(BlueprintPure)
    EUITextParagraphVerticalAlign GetParagraphVerticalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    EUITextParagraphHorizontalAlign GetParagraphHorizontalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    EUITextOverflowType GetOverflowType() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHorizontalWidth() const;
    
    UFUNCTION(BlueprintPure)
    EUITextFontStyle GetFontStyle() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetFontSpace() const;
    
    UFUNCTION(BlueprintPure)
    float GetFontSize() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIFontData_BaseObject* GetFont() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUITextCharProperty> GetCharPropertyArray() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAdjustWidthRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAdjustWidth() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAdjustHeightRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAdjustHeight() const;
    

    // Fix for true pure virtual functions not being implemented
};

