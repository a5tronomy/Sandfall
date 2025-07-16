#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AndroidPermissionFunctionLibrary.generated.h"

class UAndroidPermissionCallbackProxy;

UCLASS(BlueprintType)
class ANDROIDPERMISSION_API UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAndroidPermissionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool CheckPermission(const FString& permission);
    
    UFUNCTION(BlueprintCallable)
    static UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<FString>& Permissions);
    
};

