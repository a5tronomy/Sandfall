#include "LGUIBPLibrary.h"
#include "Templates/SubclassOf.h"

ULGUIBPLibrary::ULGUIBPLibrary() {
}

ULTweener* ULGUIBPLibrary::WidthTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::VerticalAnchoredPositionTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::UILocalPositionTo(UUIItem* Target, FVector endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::StretchTopTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::StretchRightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::StretchLeftTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::StretchBottomTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

void ULGUIBPLibrary::PrepareDuplicateData(AActor* Target, FLGUIDuplicateDataContainer& Data) {
}

ULTweener* ULGUIBPLibrary::PivotTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

AActor* ULGUIBPLibrary::LoadPrefabWithTransform(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, FVector Location, FRotator Rotation, FVector Scale, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake) {
    return NULL;
}

AActor* ULGUIBPLibrary::LoadPrefabWithReplacement(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, const TMap<UObject*, UObject*>& InReplaceAssetMap, const TMap<UClass*, UClass*>& InReplaceClassMap, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake) {
    return NULL;
}

AActor* ULGUIBPLibrary::LoadPrefab(UObject* WorldContextObject, ULGUIPrefab* InPrefab, USceneComponent* InParent, const FLGUIPrefab_LoadPrefabCallback& InCallbackBeforeAwake, bool SetRelativeTransformToIdentity) {
    return NULL;
}

void ULGUIBPLibrary::LGUIExecuteInputAxis(FKey InputKey, float Value) {
}

void ULGUIBPLibrary::LGUIExecuteInputAction(FKey InputKey, bool pressOrRelease) {
}

void ULGUIBPLibrary::LGUIExecuteControllerInputAxis(FKey InputKey, float Value) {
}

void ULGUIBPLibrary::LGUIExecuteControllerInputAction(FKey InputKey, bool pressOrRelease) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteVector4(const FLGUIEventDelegate& InEvent, const FVector4& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteVector3(const FLGUIEventDelegate& InEvent, const FVector& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteVector2(const FLGUIEventDelegate& InEvent, const FVector2D& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteUInt8(const FLGUIEventDelegate& InEvent, const uint8& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteText(const FLGUIEventDelegate& InEvent, const FText& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteString(const FLGUIEventDelegate& InEvent, const FString& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteRotator(const FLGUIEventDelegate& InEvent, const FRotator& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteQuaternion(const FLGUIEventDelegate& InEvent, const FQuat& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecutePointerEvent(const FLGUIEventDelegate& InEvent, ULGUIPointerEventData* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteObject(const FLGUIEventDelegate& InEvent, UObject* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteName(const FLGUIEventDelegate& InEvent, const FName& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteLinearColor(const FLGUIEventDelegate& InEvent, const FLinearColor& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteInt32(const FLGUIEventDelegate& InEvent, const int32& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteFloat(const FLGUIEventDelegate& InEvent, const float& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteEmpty(const FLGUIEventDelegate& InEvent) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteColor(const FLGUIEventDelegate& InEvent, const FColor& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteClass(const FLGUIEventDelegate& InEvent, UClass* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteBool(const FLGUIEventDelegate& InEvent, const bool& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegateExecuteActor(const FLGUIEventDelegate& InEvent, AActor* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector4_Unregister(const FLGUIEventDelegate_Vector4& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Vector4_Register(const FLGUIEventDelegate_Vector4& InEvent, FLGUIEventDelegate_Vector4_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector4_Execute(const FLGUIEventDelegate_Vector4& InEvent, FVector4 InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector3_Unregister(const FLGUIEventDelegate_Vector3& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Vector3_Register(const FLGUIEventDelegate_Vector3& InEvent, FLGUIEventDelegate_Vector3_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector3_Execute(const FLGUIEventDelegate_Vector3& InEvent, FVector InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector2_Unregister(const FLGUIEventDelegate_Vector2& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Vector2_Register(const FLGUIEventDelegate_Vector2& InEvent, FLGUIEventDelegate_Vector2_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Vector2_Execute(const FLGUIEventDelegate_Vector2& InEvent, FVector2D InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_UInt8_Unregister(const FLGUIEventDelegate_UInt8& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_UInt8_Register(const FLGUIEventDelegate_UInt8& InEvent, FLGUIEventDelegate_UInt8_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_UInt8_Execute(const FLGUIEventDelegate_UInt8& InEvent, uint8 InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Text_Unregister(const FLGUIEventDelegate_Text& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Text_Register(const FLGUIEventDelegate_Text& InEvent, FLGUIEventDelegate_Text_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Text_Execute(const FLGUIEventDelegate_Text& InEvent, FText InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_String_Unregister(const FLGUIEventDelegate_String& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_String_Register(const FLGUIEventDelegate_String& InEvent, FLGUIEventDelegate_String_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_String_Execute(const FLGUIEventDelegate_String& InEvent, const FString& InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Rotator_Unregister(const FLGUIEventDelegate_Rotator& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Rotator_Register(const FLGUIEventDelegate_Rotator& InEvent, FLGUIEventDelegate_Rotator_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Rotator_Execute(const FLGUIEventDelegate_Rotator& InEvent, FRotator InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Quaternion_Unregister(const FLGUIEventDelegate_Quaternion& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Quaternion_Register(const FLGUIEventDelegate_Quaternion& InEvent, FLGUIEventDelegate_Quaternion_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Quaternion_Execute(const FLGUIEventDelegate_Quaternion& InEvent, FQuat InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_PointerEvent_Unregister(const FLGUIEventDelegate_PointerEvent& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_PointerEvent_Register(const FLGUIEventDelegate_PointerEvent& InEvent, FLGUIEventDelegate_PointerEvent_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_PointerEvent_Execute(const FLGUIEventDelegate_PointerEvent& InEvent, ULGUIPointerEventData* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Object_Unregister(const FLGUIEventDelegate_Object& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Object_Register(const FLGUIEventDelegate_Object& InEvent, FLGUIEventDelegate_Object_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Object_Execute(const FLGUIEventDelegate_Object& InEvent, UObject* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Name_Unregister(const FLGUIEventDelegate_Name& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Name_Register(const FLGUIEventDelegate_Name& InEvent, FLGUIEventDelegate_Name_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Name_Execute(const FLGUIEventDelegate_Name& InEvent, FName InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_LinearColor_Unregister(const FLGUIEventDelegate_LinearColor& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_LinearColor_Register(const FLGUIEventDelegate_LinearColor& InEvent, FLGUIEventDelegate_LinearColor_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_LinearColor_Execute(const FLGUIEventDelegate_LinearColor& InEvent, FLinearColor InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Int64_Unregister(const FLGUIEventDelegate_Int64& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Int64_Register(const FLGUIEventDelegate_Int64& InEvent, FLGUIEventDelegate_Int64_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Int64_Execute(const FLGUIEventDelegate_Int64& InEvent, int64 InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Int32_Unregister(const FLGUIEventDelegate_Int32& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Int32_Register(const FLGUIEventDelegate_Int32& InEvent, FLGUIEventDelegate_Int32_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Int32_Execute(const FLGUIEventDelegate_Int32& InEvent, int32 InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Float_Unregister(const FLGUIEventDelegate_Float& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Float_Register(const FLGUIEventDelegate_Float& InEvent, FLGUIEventDelegate_Float_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Float_Execute(const FLGUIEventDelegate_Float& InEvent, float InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Empty_Unregister(const FLGUIEventDelegate_Empty& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Empty_Register(const FLGUIEventDelegate_Empty& InEvent, FLGUIEventDelegate_Empty_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Empty_Execute(const FLGUIEventDelegate_Empty& InEvent) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Double_Unregister(const FLGUIEventDelegate_Double& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Double_Register(const FLGUIEventDelegate_Double& InEvent, FLGUIEventDelegate_Double_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Double_Execute(const FLGUIEventDelegate_Double& InEvent, double InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Color_Unregister(const FLGUIEventDelegate_Color& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Color_Register(const FLGUIEventDelegate_Color& InEvent, FLGUIEventDelegate_Color_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Color_Execute(const FLGUIEventDelegate_Color& InEvent, FColor InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Class_Unregister(const FLGUIEventDelegate_Class& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Class_Register(const FLGUIEventDelegate_Class& InEvent, FLGUIEventDelegate_Class_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Class_Execute(const FLGUIEventDelegate_Class& InEvent, UClass* InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Bool_Unregister(const FLGUIEventDelegate_Bool& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Bool_Register(const FLGUIEventDelegate_Bool& InEvent, FLGUIEventDelegate_Bool_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Bool_Execute(const FLGUIEventDelegate_Bool& InEvent, bool InParameter) {
}

void ULGUIBPLibrary::LGUIEventDelegate_Actor_Unregister(const FLGUIEventDelegate_Actor& InEvent, const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper ULGUIBPLibrary::LGUIEventDelegate_Actor_Register(const FLGUIEventDelegate_Actor& InEvent, FLGUIEventDelegate_Actor_DynamicDelegate InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIBPLibrary::LGUIEventDelegate_Actor_Execute(const FLGUIEventDelegate_Actor& InEvent, AActor* InParameter) {
}

TSubclassOf<UActorComponent> ULGUIBPLibrary::LGUICompRef_GetComponentClass(const FLGUIComponentReference& InLGUIComponentReference) {
    return NULL;
}

UActorComponent* ULGUIBPLibrary::LGUICompRef_GetComponent(const FLGUIComponentReference& InLGUIComponentReference, TSubclassOf<UActorComponent> InComponentType) {
    return NULL;
}

AActor* ULGUIBPLibrary::LGUICompRef_GetActor(const FLGUIComponentReference& InLGUIComponentReference) {
    return NULL;
}

void ULGUIBPLibrary::K2_LGUICompRef_GetComponent(const FLGUIComponentReference& InLGUICompRef, UActorComponent*& OutResult) {
}

ULTweener* ULGUIBPLibrary::HorizontalAnchoredPositionTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::HeightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

void ULGUIBPLibrary::GetSpriteUV(const FLGUISpriteInfo& SpriteInfo, float& uv0X, float& uv0Y, float& uv3X, float& uv3Y) {
}

void ULGUIBPLibrary::GetSpriteSize(const FLGUISpriteInfo& SpriteInfo, int32& Width, int32& Height) {
}

void ULGUIBPLibrary::GetSpriteBorderUV(const FLGUISpriteInfo& SpriteInfo, float& borderUV0X, float& borderUV0Y, float& borderUV3X, float& borderUV3Y) {
}

void ULGUIBPLibrary::GetSpriteBorderSize(const FLGUISpriteInfo& SpriteInfo, int32& borderLeft, int32& borderRight, int32& borderTop, int32& borderBottom) {
}

TArray<UActorComponent*> ULGUIBPLibrary::GetComponentsInChildren(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, const TSet<AActor*>& InExcludeNode) {
    return TArray<UActorComponent*>();
}

UActorComponent* ULGUIBPLibrary::GetComponentInParent(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, AActor* InStopNode) {
    return NULL;
}

UActorComponent* ULGUIBPLibrary::GetComponentInChildren(AActor* InActor, TSubclassOf<UActorComponent> ComponentClass, bool IncludeSelf, const TSet<AActor*>& InExcludeNode) {
    return NULL;
}

AActor* ULGUIBPLibrary::DuplicateActorWithPreparedData(FLGUIDuplicateDataContainer& Data, USceneComponent* Parent) {
    return NULL;
}

AActor* ULGUIBPLibrary::DuplicateActor(AActor* Target, USceneComponent* Parent) {
    return NULL;
}

void ULGUIBPLibrary::DestroyActorWithHierarchy(AActor* Target, bool WithHierarchy) {
}

ULTweener* ULGUIBPLibrary::ColorTo(UUIBaseRenderable* Target, FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::ColorFrom(UUIBaseRenderable* Target, FColor StartValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorTopTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorRightTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorOffsetYTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorOffsetXTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorOffsetTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorLeftTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchoredPositionTo(UUIItem* Target, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AnchorBottomTo(UUIItem* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AlphaTo(UUIBaseRenderable* Target, float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* ULGUIBPLibrary::AlphaFrom(UUIBaseRenderable* Target, float StartValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}


