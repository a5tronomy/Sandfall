#include "MaterialExpressionMaterialXFractal3D.h"

UMaterialExpressionMaterialXFractal3D::UMaterialExpressionMaterialXFractal3D() {
    this->ConstAmplitude = 1.00f;
    this->ConstOctaves = 3;
    this->ConstLacunarity = 2.00f;
    this->ConstDiminish = 0.50f;
    this->Scale = 1.00f;
    this->bTurbulence = false;
    this->Levels = 6;
    this->OutputMin = 0.00f;
    this->OutputMax = 1.00f;
}


