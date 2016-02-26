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

#ifndef MEDIA_CDM_PPAPI_EXTERNAL_OPEN_CDM_PLAYREADY_CONSTANTS_H_
#define MEDIA_CDM_PPAPI_EXTERNAL_OPEN_CDM_PLAYREADY_CONSTANTS_H_

namespace media {
   const uint8_t  kOcdmKeySystemId[] =
      {0x10, 0x77, 0xef, 0xec, 0xc0, 0xb2,
       0x4d, 0x02, 0xac, 0xe3, 0x3c, 0x1e,
       0x52, 0xe2, 0xfb, 0x4b};

  const char kExternalOpenCdmKeySystem[] = "org.chromium.externalclearkey";
}
#endif
