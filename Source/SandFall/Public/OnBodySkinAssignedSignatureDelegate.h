#pragma once
#include "CoreMinimal.h"
#include "OnBodySkinAssignedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBodySkinAssignedSignature, AActor*, NewBodySkinObject);

