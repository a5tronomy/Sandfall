#pragma once
#include "CoreMinimal.h"
#include "OnFaceSkinAssignedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFaceSkinAssignedSignature, AActor*, NewFaceSkinObject);

