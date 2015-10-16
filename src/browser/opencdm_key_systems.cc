/*
 * Copyright 2015 Linaro LtD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "base/strings/string16.h"
#include "opencdm_key_systems.h"
using namespace media;

#if defined(ENABLE_PEPPER_CDMS)


#ifdef OCDM_USE_PLAYREADY
static void AddPlayreadyKeySystem(std::vector<KeySystemInfo>* key_systems_info) {
  static const char kExternalOpenCdmKeySystem[] =
      "com.microsoft.playready";
  static const char kExternalOpenCdmPepperType[] =
      "application/x-ppapi-open-cdm";

  KeySystemInfo info;
  //TODO: Add check if PPAPI CDM available
  info.key_system = kExternalOpenCdmKeySystem;
  info.supported_codecs |= media::EME_CODEC_WEBM_ALL;
  info.supported_init_data_types |= media::kInitDataTypeMaskWebM;
  #if defined (USE_PROPRIETARY_CODECS)
  info.supported_codecs |= media::EME_CODEC_MP4_ALL;
  info.supported_init_data_types |= media::kInitDataTypeMaskCenc;
  #endif

  info.max_audio_robustness = media::EmeRobustness::EMPTY;
  info.max_video_robustness = media::EmeRobustness::EMPTY;

  // Persistent sessions are faked.
   info.persistent_license_support = media::EmeSessionTypeSupport::SUPPORTED;
  info.persistent_release_message_support =
      media::EmeSessionTypeSupport::NOT_SUPPORTED;
  info.persistent_state_support = media::EmeFeatureSupport::REQUESTABLE;
  info.distinctive_identifier_support = media::EmeFeatureSupport::NOT_SUPPORTED;

  info.pepper_type = kExternalOpenCdmPepperType;

  key_systems_info->push_back(info);
}
#else
/* No key system defined. Fail back to ClearKey implementation */
static void AddOcdmClearKeySystem(std::vector<KeySystemInfo>* key_systems_info) {
  static const char kExternalOpenCdmKeySystem[] =
      "org.chromium.externalclearkey";
  static const char kExternalOpenCdmPepperType[] =
      "application/x-ppapi-open-cdm";

  KeySystemInfo info;
  //TODO: Add check if PPAPI CDM available
  info.key_system = kExternalOpenCdmKeySystem;
  info.supported_codecs |= media::EME_CODEC_WEBM_ALL;
  info.supported_init_data_types |= media::kInitDataTypeMaskWebM;
  #if defined (USE_PROPRIETARY_CODECS)
  info.supported_codecs |= media::EME_CODEC_MP4_ALL;
  info.supported_init_data_types |= media::kInitDataTypeMaskCenc;
  #endif

  info.max_audio_robustness = media::EmeRobustness::EMPTY;
  info.max_video_robustness = media::EmeRobustness::EMPTY;

  // Persistent sessions are faked.
   info.persistent_license_support = media::EmeSessionTypeSupport::SUPPORTED;
  info.persistent_release_message_support =
      media::EmeSessionTypeSupport::NOT_SUPPORTED;
  info.persistent_state_support = media::EmeFeatureSupport::REQUESTABLE;
  info.distinctive_identifier_support = media::EmeFeatureSupport::NOT_SUPPORTED;

  info.pepper_type = kExternalOpenCdmPepperType;

  key_systems_info->push_back(info);
}

#endif

void AddExternalOpenCdmKeySystems(std::vector<KeySystemInfo>* key_systems_info) {

#ifdef OCDM_USE_PLAYREADY
  AddPlayreadyKeySystem(key_systems_info);
#else
  AddOcdmClearKeySystem(key_systems_info);
#endif
}
#endif
