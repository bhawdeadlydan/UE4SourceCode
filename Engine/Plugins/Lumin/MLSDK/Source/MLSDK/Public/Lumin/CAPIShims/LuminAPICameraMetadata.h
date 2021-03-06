// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#if !defined(WITH_MLSDK) || WITH_MLSDK

#include "Lumin/CAPIShims/LuminAPI.h"

LUMIN_THIRD_PARTY_INCLUDES_START
#include <ml_camera_metadata.h>
#include <ml_camera_metadata_tags.h>
LUMIN_THIRD_PARTY_INCLUDES_END

namespace MLSDK_API
{

CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionAvailableAberrationModes)
#define MLCameraMetadataGetColorCorrectionAvailableAberrationModes ::MLSDK_API::MLCameraMetadataGetColorCorrectionAvailableAberrationModesShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEAvailableModes)
#define MLCameraMetadataGetControlAEAvailableModes ::MLSDK_API::MLCameraMetadataGetControlAEAvailableModesShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAECompensationRange)
#define MLCameraMetadataGetControlAECompensationRange ::MLSDK_API::MLCameraMetadataGetControlAECompensationRangeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAECompensationStep)
#define MLCameraMetadataGetControlAECompensationStep ::MLSDK_API::MLCameraMetadataGetControlAECompensationStepShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAELockAvailable)
#define MLCameraMetadataGetControlAELockAvailable ::MLSDK_API::MLCameraMetadataGetControlAELockAvailableShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBAvailableModes)
#define MLCameraMetadataGetControlAWBAvailableModes ::MLSDK_API::MLCameraMetadataGetControlAWBAvailableModesShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBLockAvailable)
#define MLCameraMetadataGetControlAWBLockAvailable ::MLSDK_API::MLCameraMetadataGetControlAWBLockAvailableShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetScalerProcessedSizes)
#define MLCameraMetadataGetScalerProcessedSizes ::MLSDK_API::MLCameraMetadataGetScalerProcessedSizesShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetScalerAvailableMaxDigitalZoom)
#define MLCameraMetadataGetScalerAvailableMaxDigitalZoom ::MLSDK_API::MLCameraMetadataGetScalerAvailableMaxDigitalZoomShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetScalerAvailableStreamConfigurations)
#define MLCameraMetadataGetScalerAvailableStreamConfigurations ::MLSDK_API::MLCameraMetadataGetScalerAvailableStreamConfigurationsShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorInfoActiveArraySize)
#define MLCameraMetadataGetSensorInfoActiveArraySize ::MLSDK_API::MLCameraMetadataGetSensorInfoActiveArraySizeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorInfoSensitivityRange)
#define MLCameraMetadataGetSensorInfoSensitivityRange ::MLSDK_API::MLCameraMetadataGetSensorInfoSensitivityRangeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorInfoExposureTimeRange)
#define MLCameraMetadataGetSensorInfoExposureTimeRange ::MLSDK_API::MLCameraMetadataGetSensorInfoExposureTimeRangeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorOrientation)
#define MLCameraMetadataGetSensorOrientation ::MLSDK_API::MLCameraMetadataGetSensorOrientationShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetSensorInfoExposureTimeRange)
#define MLCameraMetadataSetSensorInfoExposureTimeRange ::MLSDK_API::MLCameraMetadataSetSensorInfoExposureTimeRangeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionModeRequestMetadata)
#define MLCameraMetadataGetColorCorrectionModeRequestMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionModeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionTransformRequestMetadata)
#define MLCameraMetadataGetColorCorrectionTransformRequestMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionTransformRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionGainsRequestMetadata)
#define MLCameraMetadataGetColorCorrectionGainsRequestMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionGainsRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionAberrationModeRequestMetadata)
#define MLCameraMetadataGetColorCorrectionAberrationModeRequestMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionAberrationModeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEAntibandingModeRequestMetadata)
#define MLCameraMetadataGetControlAEAntibandingModeRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAEAntibandingModeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEExposureCompensationRequestMetadata)
#define MLCameraMetadataGetControlAEExposureCompensationRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAEExposureCompensationRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAELockRequestMetadata)
#define MLCameraMetadataGetControlAELockRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAELockRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEModeRequestMetadata)
#define MLCameraMetadataGetControlAEModeRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAEModeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAETargetFPSRangeRequestMetadata)
#define MLCameraMetadataGetControlAETargetFPSRangeRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAETargetFPSRangeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBLockRequestMetadata)
#define MLCameraMetadataGetControlAWBLockRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAWBLockRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBModeRequestMetadata)
#define MLCameraMetadataGetControlAWBModeRequestMetadata ::MLSDK_API::MLCameraMetadataGetControlAWBModeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorExposureTimeRequestMetadata)
#define MLCameraMetadataGetSensorExposureTimeRequestMetadata ::MLSDK_API::MLCameraMetadataGetSensorExposureTimeRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorSensitivityRequestMetadata)
#define MLCameraMetadataGetSensorSensitivityRequestMetadata ::MLSDK_API::MLCameraMetadataGetSensorSensitivityRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetScalerCropRegionRequestMetadata)
#define MLCameraMetadataGetScalerCropRegionRequestMetadata ::MLSDK_API::MLCameraMetadataGetScalerCropRegionRequestMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetColorCorrectionMode)
#define MLCameraMetadataSetColorCorrectionMode ::MLSDK_API::MLCameraMetadataSetColorCorrectionModeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetColorCorrectionTransform)
#define MLCameraMetadataSetColorCorrectionTransform ::MLSDK_API::MLCameraMetadataSetColorCorrectionTransformShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetColorCorrectionGains)
#define MLCameraMetadataSetColorCorrectionGains ::MLSDK_API::MLCameraMetadataSetColorCorrectionGainsShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetColorCorrectionAberrationMode)
#define MLCameraMetadataSetColorCorrectionAberrationMode ::MLSDK_API::MLCameraMetadataSetColorCorrectionAberrationModeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAEAntibandingMode)
#define MLCameraMetadataSetControlAEAntibandingMode ::MLSDK_API::MLCameraMetadataSetControlAEAntibandingModeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAEExposureCompensation)
#define MLCameraMetadataSetControlAEExposureCompensation ::MLSDK_API::MLCameraMetadataSetControlAEExposureCompensationShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAELock)
#define MLCameraMetadataSetControlAELock ::MLSDK_API::MLCameraMetadataSetControlAELockShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAEMode)
#define MLCameraMetadataSetControlAEMode ::MLSDK_API::MLCameraMetadataSetControlAEModeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAETargetFPSRange)
#define MLCameraMetadataSetControlAETargetFPSRange ::MLSDK_API::MLCameraMetadataSetControlAETargetFPSRangeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAWBLock)
#define MLCameraMetadataSetControlAWBLock ::MLSDK_API::MLCameraMetadataSetControlAWBLockShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetControlAWBMode)
#define MLCameraMetadataSetControlAWBMode ::MLSDK_API::MLCameraMetadataSetControlAWBModeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetSensorExposureTime)
#define MLCameraMetadataSetSensorExposureTime ::MLSDK_API::MLCameraMetadataSetSensorExposureTimeShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetSensorSensitivity)
#define MLCameraMetadataSetSensorSensitivity ::MLSDK_API::MLCameraMetadataSetSensorSensitivityShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataSetScalerCropRegion)
#define MLCameraMetadataSetScalerCropRegion ::MLSDK_API::MLCameraMetadataSetScalerCropRegionShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionModeResultMetadata)
#define MLCameraMetadataGetColorCorrectionModeResultMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionModeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionTransformResultMetadata)
#define MLCameraMetadataGetColorCorrectionTransformResultMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionTransformResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionAberrationModeResultMetadata)
#define MLCameraMetadataGetColorCorrectionAberrationModeResultMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionAberrationModeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetColorCorrectionGainsResultMetadata)
#define MLCameraMetadataGetColorCorrectionGainsResultMetadata ::MLSDK_API::MLCameraMetadataGetColorCorrectionGainsResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEAntibandingModeResultMetadata)
#define MLCameraMetadataGetControlAEAntibandingModeResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAEAntibandingModeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEExposureCompensationResultMetadata)
#define MLCameraMetadataGetControlAEExposureCompensationResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAEExposureCompensationResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAELockResultMetadata)
#define MLCameraMetadataGetControlAELockResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAELockResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEModeResultMetadata)
#define MLCameraMetadataGetControlAEModeResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAEModeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAETargetFPSRangeResultMetadata)
#define MLCameraMetadataGetControlAETargetFPSRangeResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAETargetFPSRangeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAEStateResultMetadata)
#define MLCameraMetadataGetControlAEStateResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAEStateResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBLockResultMetadata)
#define MLCameraMetadataGetControlAWBLockResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAWBLockResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetControlAWBStateResultMetadata)
#define MLCameraMetadataGetControlAWBStateResultMetadata ::MLSDK_API::MLCameraMetadataGetControlAWBStateResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorExposureTimeResultMetadata)
#define MLCameraMetadataGetSensorExposureTimeResultMetadata ::MLSDK_API::MLCameraMetadataGetSensorExposureTimeResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorSensitivityResultMetadata)
#define MLCameraMetadataGetSensorSensitivityResultMetadata ::MLSDK_API::MLCameraMetadataGetSensorSensitivityResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorTimestampResultMetadata)
#define MLCameraMetadataGetSensorTimestampResultMetadata ::MLSDK_API::MLCameraMetadataGetSensorTimestampResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetScalerCropRegionResultMetadata)
#define MLCameraMetadataGetScalerCropRegionResultMetadata ::MLSDK_API::MLCameraMetadataGetScalerCropRegionResultMetadataShim
CREATE_FUNCTION_SHIM(ml_camera_metadata, MLResult, MLCameraMetadataGetSensorFrameDurationResultMetadata)
#define MLCameraMetadataGetSensorFrameDurationResultMetadata ::MLSDK_API::MLCameraMetadataGetSensorFrameDurationResultMetadataShim

}

#endif // !defined(WITH_MLSDK) || WITH_MLSDK
