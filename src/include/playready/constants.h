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
  /*
  * Playready key system ID. Source: http://bit.ly/1LLitef
  */
  const uint8_t  kOcdmKeySystemId[] =
      {0x9A, 0x04, 0xF0, 0x79, 0x98,
       0x40, 0x42, 0x86, 0xAB, 0x92,
       0xE6, 0x5B, 0xE0, 0x88, 0x5F, 0x95};

  const char kExternalOpenCdmKeySystem[] = "com.microsoft.playready";
}
#endif
