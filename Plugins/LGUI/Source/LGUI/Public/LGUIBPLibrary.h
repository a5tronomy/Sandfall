#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ELTweenEase.h"
#include "LGUIComponentReference.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIDuplicateDataContainer.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Actor.h"
#include "LGUIEventDelegate_Actor_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Bool.h"
#include "LGUIEventDelegate_Bool_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Class.h"
#include "LGUIEventDelegate_Class_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Color.h"
#include "LGUIEventDelegate_Color_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Double.h"
#include "LGUIEventDelegate_Double_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Empty.h"
#include "LGUIEventDelegate_Empty_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Float.h"
#include "LGUIEventDelegate_Float_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Int32.h"
#include "LGUIEventDelegate_Int32_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Int64.h"
#include "LGUIEventDelegate_Int64_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_LinearColor.h"
#include "LGUIEventDelegate_LinearColor_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Name.h"
#include "LGUIEventDelegate_Name_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Object.h"
#include "LGUIEventDelegate_Object_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_PointerEvent.h"
#include "LGUIEventDelegate_PointerEvent_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Quaternion.h"
#include "LGUIEventDelegate_Quaternion_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Rotator.h"
#include "LGUIEventDelegate_Rotator_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_String.h"
#include "LGUIEventDelegate_String_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Text.h"
#include "LGUIEventDelegate_Text_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_UInt8.h"
#include "LGUIEventDelegate_UInt8_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Vector2.h"
#include "LGUIEventDelegate_Vector2_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Vector3.h"
#include "LGUIEventDelegate_Vector3_DynamicDelegateDelegate.h"
#include "LGUIEventDelegate_Vector4.h"
#include "LGUIEventDelegate_Vector4_DynamicDelegateDelegate.h"
#include "LGUIPrefab_LoadPrefabCallbackDelegate.h"
#include "LGUISpriteInfo.h"
#include "Templates/SubclassOf.h"
#include "LGUIBPLibrary.generated.h"

class AActor;
class UActorComponent;
class ULGUIPointerEventData;
class ULGUIPrefab;
class ULTweener;
class UObject;
class USceneComponent;
class UUIBaseRenderable;
class UUIItem;

UCLASS(BlueprintType)
class LGUI_API ULGUIBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULGUIBPLibrary();

    UFUNCTION(BlueprintCallable)
    static ULTweener* WidthTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* VerticalAnchoredPositionTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* UILocalPositionTo(UUIItem* Target, FVector endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* StretchTopTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* StretchRightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* StretchLeftTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* StretchBottomTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static void PrepareDuplicateData(AActor* Target, FLGUIDuplicateDataContainer& Data);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* PivotTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* LoadPrefabWithTransform(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, FVector Location, FRotator Rotation, FVector Scale, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* LoadPrefabWithReplacement(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, const TMap<UObject*, UObject*>& InReplaceAssetMap, const TMap<UClass*, UClass*>& InReplaceClassMap, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* LoadPrefab(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake, bool SetRelativeTransformToIdentity);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIExecuteInputAxis(FKey InputKey, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIExecuteInputAction(FKey InputKey, bool pressOrRelease);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIExecuteControllerInputAxis(FKey InputKey, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIExecuteControllerInputAction(FKey InputKey, bool pressOrRelease);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteVector4(const FLGUIEventDelegate& InEvent, const FVector4& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteVector3(const FLGUIEventDelegate& InEvent, const FVector& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteVector2(const FLGUIEventDelegate& InEvent, const FVector2D& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteUInt8(const FLGUIEventDelegate& InEvent, const uint8& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteText(const FLGUIEventDelegate& InEvent, const FText& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteString(const FLGUIEventDelegate& InEvent, const FString& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteRotator(const FLGUIEventDelegate& InEvent, const FRotator& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteQuaternion(const FLGUIEventDelegate& InEvent, const FQuat& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecutePointerEvent(const FLGUIEventDelegate& InEvent, ULGUIPointerEventData* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteObject(const FLGUIEventDelegate& InEvent, UObject* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteName(const FLGUIEventDelegate& InEvent, const FName& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteLinearColor(const FLGUIEventDelegate& InEvent, const FLinearColor& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteInt32(const FLGUIEventDelegate& InEvent, const int32& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteFloat(const FLGUIEventDelegate& InEvent, const float& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteEmpty(const FLGUIEventDelegate& InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteColor(const FLGUIEventDelegate& InEvent, const FColor& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteClass(const FLGUIEventDelegate& InEvent, UClass* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteBool(const FLGUIEventDelegate& InEvent, const bool& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegateExecuteActor(const FLGUIEventDelegate& InEvent, AActor* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector4_Unregister(const FLGUIEventDelegate_Vector4& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Vector4_Register(const FLGUIEventDelegate_Vector4& InEvent, FLGUIEventDelegate_Vector4_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector4_Execute(const FLGUIEventDelegate_Vector4& InEvent, FVector4 InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector3_Unregister(const FLGUIEventDelegate_Vector3& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Vector3_Register(const FLGUIEventDelegate_Vector3& InEvent, FLGUIEventDelegate_Vector3_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector3_Execute(const FLGUIEventDelegate_Vector3& InEvent, FVector InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector2_Unregister(const FLGUIEventDelegate_Vector2& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Vector2_Register(const FLGUIEventDelegate_Vector2& InEvent, FLGUIEventDelegate_Vector2_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Vector2_Execute(const FLGUIEventDelegate_Vector2& InEvent, FVector2D InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_UInt8_Unregister(const FLGUIEventDelegate_UInt8& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_UInt8_Register(const FLGUIEventDelegate_UInt8& InEvent, FLGUIEventDelegate_UInt8_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_UInt8_Execute(const FLGUIEventDelegate_UInt8& InEvent, uint8 InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Text_Unregister(const FLGUIEventDelegate_Text& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Text_Register(const FLGUIEventDelegate_Text& InEvent, FLGUIEventDelegate_Text_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Text_Execute(const FLGUIEventDelegate_Text& InEvent, FText InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_String_Unregister(const FLGUIEventDelegate_String& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_String_Register(const FLGUIEventDelegate_String& InEvent, FLGUIEventDelegate_String_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_String_Execute(const FLGUIEventDelegate_String& InEvent, const FString& InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Rotator_Unregister(const FLGUIEventDelegate_Rotator& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Rotator_Register(const FLGUIEventDelegate_Rotator& InEvent, FLGUIEventDelegate_Rotator_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Rotator_Execute(const FLGUIEventDelegate_Rotator& InEvent, FRotator InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Quaternion_Unregister(const FLGUIEventDelegate_Quaternion& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Quaternion_Register(const FLGUIEventDelegate_Quaternion& InEvent, FLGUIEventDelegate_Quaternion_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Quaternion_Execute(const FLGUIEventDelegate_Quaternion& InEvent, FQuat InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_PointerEvent_Unregister(const FLGUIEventDelegate_PointerEvent& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_PointerEvent_Register(const FLGUIEventDelegate_PointerEvent& InEvent, FLGUIEventDelegate_PointerEvent_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_PointerEvent_Execute(const FLGUIEventDelegate_PointerEvent& InEvent, ULGUIPointerEventData* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Object_Unregister(const FLGUIEventDelegate_Object& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Object_Register(const FLGUIEventDelegate_Object& InEvent, FLGUIEventDelegate_Object_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Object_Execute(const FLGUIEventDelegate_Object& InEvent, UObject* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Name_Unregister(const FLGUIEventDelegate_Name& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Name_Register(const FLGUIEventDelegate_Name& InEvent, FLGUIEventDelegate_Name_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Name_Execute(const FLGUIEventDelegate_Name& InEvent, FName InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_LinearColor_Unregister(const FLGUIEventDelegate_LinearColor& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_LinearColor_Register(const FLGUIEventDelegate_LinearColor& InEvent, FLGUIEventDelegate_LinearColor_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_LinearColor_Execute(const FLGUIEventDelegate_LinearColor& InEvent, FLinearColor InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Int64_Unregister(const FLGUIEventDelegate_Int64& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Int64_Register(const FLGUIEventDelegate_Int64& InEvent, FLGUIEventDelegate_Int64_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Int64_Execute(const FLGUIEventDelegate_Int64& InEvent, int64 InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Int32_Unregister(const FLGUIEventDelegate_Int32& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Int32_Register(const FLGUIEventDelegate_Int32& InEvent, FLGUIEventDelegate_Int32_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Int32_Execute(const FLGUIEventDelegate_Int32& InEvent, int32 InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Float_Unregister(const FLGUIEventDelegate_Float& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Float_Register(const FLGUIEventDelegate_Float& InEvent, FLGUIEventDelegate_Float_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Float_Execute(const FLGUIEventDelegate_Float& InEvent, float InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Empty_Unregister(const FLGUIEventDelegate_Empty& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Empty_Register(const FLGUIEventDelegate_Empty& InEvent, FLGUIEventDelegate_Empty_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Empty_Execute(const FLGUIEventDelegate_Empty& InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Double_Unregister(const FLGUIEventDelegate_Double& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Double_Register(const FLGUIEventDelegate_Double& InEvent, FLGUIEventDelegate_Double_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Double_Execute(const FLGUIEventDelegate_Double& InEvent, double InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Color_Unregister(const FLGUIEventDelegate_Color& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Color_Register(const FLGUIEventDelegate_Color& InEvent, FLGUIEventDelegate_Color_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Color_Execute(const FLGUIEventDelegate_Color& InEvent, FColor InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Class_Unregister(const FLGUIEventDelegate_Class& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Class_Register(const FLGUIEventDelegate_Class& InEvent, FLGUIEventDelegate_Class_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Class_Execute(const FLGUIEventDelegate_Class& InEvent, UClass* InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Bool_Unregister(const FLGUIEventDelegate_Bool& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Bool_Register(const FLGUIEventDelegate_Bool& InEvent, FLGUIEventDelegate_Bool_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Bool_Execute(const FLGUIEventDelegate_Bool& InEvent, bool InParameter);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Actor_Unregister(const FLGUIEventDelegate_Actor& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static FLGUIDelegateHandleWrapper LGUIEventDelegate_Actor_Register(const FLGUIEventDelegate_Actor& InEvent, FLGUIEventDelegate_Actor_DynamicDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void LGUIEventDelegate_Actor_Execute(const FLGUIEventDelegate_Actor& InEvent, AActor* InParameter);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UActorComponent> LGUICompRef_GetComponentClass(const FLGUIComponentReference& InLGUIComponentReference);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* LGUICompRef_GetComponent(const FLGUIComponentReference& InLGUIComponentReference, TSubclassOf<UActorComponent> InComponentType);
    
    UFUNCTION(BlueprintPure)
    static AActor* LGUICompRef_GetActor(const FLGUIComponentReference& InLGUIComponentReference);
    
    UFUNCTION(BlueprintPure)
    static void K2_LGUICompRef_GetComponent(const FLGUIComponentReference& InLGUICompRef, UActorComponent*& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* HorizontalAnchoredPositionTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* HeightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintPure)
    static void GetSpriteUV(const FLGUISpriteInfo& SpriteInfo, float& uv0X, float& uv0Y, float& uv3X, float& uv3Y);
    
    UFUNCTION(BlueprintPure)
    static void GetSpriteSize(const FLGUISpriteInfo& SpriteInfo, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintPure)
    static void GetSpriteBorderUV(const FLGUISpriteInfo& SpriteInfo, float& borderUV0X, float& borderUV0Y, float& borderUV3X, float& borderUV3Y);
    
    UFUNCTION(BlueprintPure)
    static void GetSpriteBorderSize(const FLGUISpriteInfo& SpriteInfo, int32& borderLeft, int32& borderRight, int32& borderTop, int32& borderBottom);
    
    UFUNCTION(BlueprintPure)
    static TArray<UActorComponent*> GetComponentsInChildren(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, const TSet<AActor*>& InExcludeNode);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetComponentInParent(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, AActor* InStopNode);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetComponentInChildren(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, const TSet<AActor*>& InExcludeNode);
    
    UFUNCTION(BlueprintCallable)
    static AActor* DuplicateActorWithPreparedData(UPARAM(Ref) FLGUIDuplicateDataContainer& Data, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    static AActor* DuplicateActor(AActor* Target, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActorWithHierarchy(AActor* Target, bool WithHierarchy);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* ColorTo(UUIBaseRenderable* Target, FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* ColorFrom(UUIBaseRenderable* Target, FColor StartValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorTopTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorRightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorOffsetYTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorOffsetXTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorOffsetTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorLeftTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchoredPositionTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AnchorBottomTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AlphaTo(UUIBaseRenderable* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* AlphaFrom(UUIBaseRenderable* Target, float StartValue, float Duration, float Delay, ELTweenEase Ease);
    
};

