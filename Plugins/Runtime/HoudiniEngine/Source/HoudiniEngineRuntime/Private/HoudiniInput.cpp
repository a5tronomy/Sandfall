#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput() {
    this->Type = EHoudiniInputType::Invalid;
    this->PreviousType = EHoudiniInputType::Invalid;
    this->AssetNodeId = -1;
    this->InputNodeId = -1;
    this->InputIndex = 0;
    this->ParmId = -1;
    this->bIsObjectPathParameter = false;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->KeepWorldTransform = EHoudiniXformType::Auto;
    this->bPackBeforeMerge = false;
    this->bImportAsReference = false;
    this->bImportAsReferenceRotScaleEnabled = true;
    this->bImportAsReferenceBboxEnabled = true;
    this->bImportAsReferenceMaterialEnabled = true;
    this->bExportLODs = false;
    this->bExportSockets = false;
    this->bPreferNaniteFallbackMesh = false;
    this->bExportColliders = false;
    this->bExportMaterialParameters = false;
    this->bDirectlyConnectHdas = true;
    this->bExportOptionsMenuExpanded = false;
    this->bGeometryInputsMenuExpanded = true;
    this->bLandscapeOptionsMenuExpanded = false;
    this->bWorldInputsMenuExpanded = true;
    this->bCurveInputsMenuExpanded = true;
    this->bCurvePointSelectionMenuExpanded = true;
    this->bCurvePointSelectionUseAbsLocation = false;
    this->bCurvePointSelectionUseAbsRotation = false;
    this->bCookOnCurveChanged = true;
    this->GeometryInputObjects.AddDefaulted(1);
    this->bStaticMeshChanged = false;
    this->bInputAssetConnectedInHoudini = false;
    this->DefaultCurveOffset = 0.00f;
    this->bAddRotAndScaleAttributesOnCurves = false;
    this->bUseLegacyInputCurves = true;
    this->bLandscapeHasExportTypeChanged = false;
    this->bIsWorldInputBoundSelector = false;
    this->bWorldInputBoundSelectorAutoUpdate = false;
    this->UnrealSplineResolution = 50.00f;
    this->GeometryCollectionInputObjects.AddDefaulted(1);
    this->bUpdateInputLandscape = false;
    this->LandscapeExportType = EHoudiniLandscapeExportType::Heightfield;
    this->bLandscapeExportSelectionOnly = false;
    this->bLandscapeControlVisiblity = false;
    this->bLandscapeAutoSelectComponent = false;
    this->bLandscapeExportMaterials = false;
    this->bLandscapeExportLighting = false;
    this->bLandscapeExportNormalizedUVs = false;
    this->bLandscapeExportTileUVs = false;
    this->bCanDeleteHoudiniNodes = true;
    this->bLandscapeAutoSelectSplines = false;
    this->bLandscapeSplinesExportOptionsMenuExpanded = false;
    this->bLandscapeSplinesExportControlPoints = false;
    this->bLandscapeSplinesExportLeftRightCurves = false;
    this->bLandscapeSplinesExportSplineMeshComponents = false;
    this->bMergeSplineMeshComponents = true;
}


