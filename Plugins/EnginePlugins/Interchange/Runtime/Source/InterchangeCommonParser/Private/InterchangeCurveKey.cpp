#include "InterchangeCurveKey.h"

FInterchangeCurveKey::FInterchangeCurveKey() {
    this->InterpMode = EInterchangeCurveInterpMode::Linear;
    this->TangentMode = EInterchangeCurveTangentMode::Auto;
    this->TangentWeightMode = EInterchangeCurveTangentWeightMode::WeightedNone;
    this->Time = 0.00f;
    this->Value = 0.00f;
    this->ArriveTangent = 0.00f;
    this->ArriveTangentWeight = 0.00f;
    this->LeaveTangent = 0.00f;
    this->LeaveTangentWeight = 0.00f;
}

