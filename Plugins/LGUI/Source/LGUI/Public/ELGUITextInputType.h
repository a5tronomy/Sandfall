#pragma once
#include "CoreMinimal.h"
#include "ELGUITextInputType.generated.h"

UENUM()
enum class ELGUITextInputType : uint8 {
    Standard,
    IntegerNumber,
    DecimalNumber,
    Alphanumeric = 5,
    EmailAddress,
    Password = 3,
    CustomFunction,
    Custom = 7,
};

