#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AndroidPermissionDynamicDelegateDelegate.h"
#include "AndroidPermissionCallbackProxy.generated.h"

UCLASS()
class ANDROIDPERMISSION_API UAndroidPermissionCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAndroidPermissionDynamicDelegate OnPermissionsGrantedDynamicDelegate;
    
    UAndroidPermissionCallbackProxy();

};

