/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (1u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x48000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (25u)
#define CapSense_1_SNS_STATUS1_SIZE                         (1u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x4E000019u)

#define CapSense_1_SNS_STATUS2_VALUE                        (CapSense_1_dsRam.snsStatus[2u])
#define CapSense_1_SNS_STATUS2_OFFSET                       (26u)
#define CapSense_1_SNS_STATUS2_SIZE                         (1u)
#define CapSense_1_SNS_STATUS2_PARAM_ID                     (0x4400001Au)

#define CapSense_1_SNS_STATUS3_VALUE                        (CapSense_1_dsRam.snsStatus[3u])
#define CapSense_1_SNS_STATUS3_OFFSET                       (27u)
#define CapSense_1_SNS_STATUS3_SIZE                         (1u)
#define CapSense_1_SNS_STATUS3_PARAM_ID                     (0x4200001Bu)

#define CapSense_1_SNS_STATUS4_VALUE                        (CapSense_1_dsRam.snsStatus[4u])
#define CapSense_1_SNS_STATUS4_OFFSET                       (28u)
#define CapSense_1_SNS_STATUS4_SIZE                         (1u)
#define CapSense_1_SNS_STATUS4_PARAM_ID                     (0x4900001Cu)

#define CapSense_1_SNS_STATUS5_VALUE                        (CapSense_1_dsRam.snsStatus[5u])
#define CapSense_1_SNS_STATUS5_OFFSET                       (29u)
#define CapSense_1_SNS_STATUS5_SIZE                         (1u)
#define CapSense_1_SNS_STATUS5_PARAM_ID                     (0x4F00001Du)

#define CapSense_1_SNS_STATUS6_VALUE                        (CapSense_1_dsRam.snsStatus[6u])
#define CapSense_1_SNS_STATUS6_OFFSET                       (30u)
#define CapSense_1_SNS_STATUS6_SIZE                         (1u)
#define CapSense_1_SNS_STATUS6_PARAM_ID                     (0x4500001Eu)

#define CapSense_1_SNS_STATUS7_VALUE                        (CapSense_1_dsRam.snsStatus[7u])
#define CapSense_1_SNS_STATUS7_OFFSET                       (31u)
#define CapSense_1_SNS_STATUS7_SIZE                         (1u)
#define CapSense_1_SNS_STATUS7_PARAM_ID                     (0x4300001Fu)

#define CapSense_1_SNS_STATUS8_VALUE                        (CapSense_1_dsRam.snsStatus[8u])
#define CapSense_1_SNS_STATUS8_OFFSET                       (32u)
#define CapSense_1_SNS_STATUS8_SIZE                         (1u)
#define CapSense_1_SNS_STATUS8_PARAM_ID                     (0x45000020u)

#define CapSense_1_SNS_STATUS9_VALUE                        (CapSense_1_dsRam.snsStatus[9u])
#define CapSense_1_SNS_STATUS9_OFFSET                       (33u)
#define CapSense_1_SNS_STATUS9_SIZE                         (1u)
#define CapSense_1_SNS_STATUS9_PARAM_ID                     (0x43000021u)

#define CapSense_1_SNS_STATUS10_VALUE                       (CapSense_1_dsRam.snsStatus[10u])
#define CapSense_1_SNS_STATUS10_OFFSET                      (34u)
#define CapSense_1_SNS_STATUS10_SIZE                        (1u)
#define CapSense_1_SNS_STATUS10_PARAM_ID                    (0x49000022u)

#define CapSense_1_SNS_STATUS11_VALUE                       (CapSense_1_dsRam.snsStatus[11u])
#define CapSense_1_SNS_STATUS11_OFFSET                      (35u)
#define CapSense_1_SNS_STATUS11_SIZE                        (1u)
#define CapSense_1_SNS_STATUS11_PARAM_ID                    (0x4F000023u)

#define CapSense_1_SNS_STATUS12_VALUE                       (CapSense_1_dsRam.snsStatus[12u])
#define CapSense_1_SNS_STATUS12_OFFSET                      (36u)
#define CapSense_1_SNS_STATUS12_SIZE                        (1u)
#define CapSense_1_SNS_STATUS12_PARAM_ID                    (0x44000024u)

#define CapSense_1_SNS_STATUS13_VALUE                       (CapSense_1_dsRam.snsStatus[13u])
#define CapSense_1_SNS_STATUS13_OFFSET                      (37u)
#define CapSense_1_SNS_STATUS13_SIZE                        (1u)
#define CapSense_1_SNS_STATUS13_PARAM_ID                    (0x42000025u)

#define CapSense_1_SNS_STATUS14_VALUE                       (CapSense_1_dsRam.snsStatus[14u])
#define CapSense_1_SNS_STATUS14_OFFSET                      (38u)
#define CapSense_1_SNS_STATUS14_SIZE                        (1u)
#define CapSense_1_SNS_STATUS14_PARAM_ID                    (0x48000026u)

#define CapSense_1_SNS_STATUS15_VALUE                       (CapSense_1_dsRam.snsStatus[15u])
#define CapSense_1_SNS_STATUS15_OFFSET                      (39u)
#define CapSense_1_SNS_STATUS15_SIZE                        (1u)
#define CapSense_1_SNS_STATUS15_PARAM_ID                    (0x4E000027u)

#define CapSense_1_SNS_STATUS16_VALUE                       (CapSense_1_dsRam.snsStatus[16u])
#define CapSense_1_SNS_STATUS16_OFFSET                      (40u)
#define CapSense_1_SNS_STATUS16_SIZE                        (1u)
#define CapSense_1_SNS_STATUS16_PARAM_ID                    (0x47000028u)

#define CapSense_1_SNS_STATUS17_VALUE                       (CapSense_1_dsRam.snsStatus[17u])
#define CapSense_1_SNS_STATUS17_OFFSET                      (41u)
#define CapSense_1_SNS_STATUS17_SIZE                        (1u)
#define CapSense_1_SNS_STATUS17_PARAM_ID                    (0x41000029u)

#define CapSense_1_SNS_STATUS18_VALUE                       (CapSense_1_dsRam.snsStatus[18u])
#define CapSense_1_SNS_STATUS18_OFFSET                      (42u)
#define CapSense_1_SNS_STATUS18_SIZE                        (1u)
#define CapSense_1_SNS_STATUS18_PARAM_ID                    (0x4B00002Au)

#define CapSense_1_SNS_STATUS19_VALUE                       (CapSense_1_dsRam.snsStatus[19u])
#define CapSense_1_SNS_STATUS19_OFFSET                      (43u)
#define CapSense_1_SNS_STATUS19_SIZE                        (1u)
#define CapSense_1_SNS_STATUS19_PARAM_ID                    (0x4D00002Bu)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (44u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xA880002Cu)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (46u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x6C80002Eu)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (48u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0x85800030u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (50u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0x89800032u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (52u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x4C800034u)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (53u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x4A800035u)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (54u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x40800036u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (55u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x46800037u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (56u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x4F800038u)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (57u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x44000039u)

#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button0.idacGainIndex)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_OFFSET           (58u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID         (0x4380003Au)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (60u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0x8680003Cu)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (62u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4280003Eu)

#define CapSense_1_BUTTON0_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button0.fingerCap)
#define CapSense_1_BUTTON0_FINGER_CAP_OFFSET                (64u)
#define CapSense_1_BUTTON0_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON0_FINGER_CAP_PARAM_ID              (0xA1000040u)

#define CapSense_1_BUTTON0_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button0.sigPFC)
#define CapSense_1_BUTTON0_SIGPFC_OFFSET                    (66u)
#define CapSense_1_BUTTON0_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON0_SIGPFC_PARAM_ID                  (0xAD000042u)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (68u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0x85810044u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (70u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0x89810046u)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (72u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x4E810048u)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (73u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x48810049u)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (74u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x4281004Au)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (75u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x4481004Bu)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (76u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x4F81004Cu)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (77u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x4401004Du)

#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button1.idacGainIndex)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_OFFSET           (78u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_PARAM_ID         (0x4381004Eu)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (80u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0x81810050u)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (82u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x45810052u)

#define CapSense_1_BUTTON1_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button1.fingerCap)
#define CapSense_1_BUTTON1_FINGER_CAP_OFFSET                (84u)
#define CapSense_1_BUTTON1_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON1_FINGER_CAP_PARAM_ID              (0xA6010054u)

#define CapSense_1_BUTTON1_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button1.sigPFC)
#define CapSense_1_BUTTON1_SIGPFC_OFFSET                    (86u)
#define CapSense_1_BUTTON1_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON1_SIGPFC_PARAM_ID                  (0xAA010056u)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (88u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0x86820058u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (90u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0x8A82005Au)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (92u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x4F82005Cu)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (93u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x4982005Du)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (94u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x4382005Eu)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (95u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x4582005Fu)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (96u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x43820060u)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (97u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x48020061u)

#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button2.idacGainIndex)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_OFFSET           (98u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_PARAM_ID         (0x4F820062u)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (100u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0x8A820064u)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (102u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x4E820066u)

#define CapSense_1_BUTTON2_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button2.fingerCap)
#define CapSense_1_BUTTON2_FINGER_CAP_OFFSET                (104u)
#define CapSense_1_BUTTON2_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON2_FINGER_CAP_PARAM_ID              (0xAF020068u)

#define CapSense_1_BUTTON2_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button2.sigPFC)
#define CapSense_1_BUTTON2_SIGPFC_OFFSET                    (106u)
#define CapSense_1_BUTTON2_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON2_SIGPFC_PARAM_ID                  (0xA302006Au)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (108u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0x8B83006Cu)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (110u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0x8783006Eu)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (112u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x45830070u)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (113u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x43830071u)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (114u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x49830072u)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (115u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x4F830073u)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (116u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x44830074u)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (117u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x4F030075u)

#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button3.idacGainIndex)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_OFFSET           (118u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_PARAM_ID         (0x48830076u)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (120u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0x8F830078u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (122u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x4B83007Au)

#define CapSense_1_BUTTON3_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button3.fingerCap)
#define CapSense_1_BUTTON3_FINGER_CAP_OFFSET                (124u)
#define CapSense_1_BUTTON3_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON3_FINGER_CAP_PARAM_ID              (0xA803007Cu)

#define CapSense_1_BUTTON3_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button3.sigPFC)
#define CapSense_1_BUTTON3_SIGPFC_OFFSET                    (126u)
#define CapSense_1_BUTTON3_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON3_SIGPFC_PARAM_ID                  (0xA403007Eu)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (128u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0x85840080u)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (130u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0x89840082u)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (132u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x4C840084u)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (133u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x4A840085u)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (134u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x40840086u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (135u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x46840087u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (136u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x4F840088u)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (137u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x44040089u)

#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button4.idacGainIndex)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_OFFSET           (138u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_PARAM_ID         (0x4384008Au)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (140u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0x8684008Cu)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (142u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x4284008Eu)

#define CapSense_1_BUTTON4_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button4.fingerCap)
#define CapSense_1_BUTTON4_FINGER_CAP_OFFSET                (144u)
#define CapSense_1_BUTTON4_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON4_FINGER_CAP_PARAM_ID              (0xA6040090u)

#define CapSense_1_BUTTON4_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button4.sigPFC)
#define CapSense_1_BUTTON4_SIGPFC_OFFSET                    (146u)
#define CapSense_1_BUTTON4_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON4_SIGPFC_PARAM_ID                  (0xAA040092u)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (148u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0x82850094u)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (150u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0x8E850096u)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (152u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x49850098u)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (153u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x4F850099u)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (154u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x4585009Au)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (155u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x4385009Bu)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (156u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x4885009Cu)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (157u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x4305009Du)

#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button5.idacGainIndex)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_OFFSET           (158u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_PARAM_ID         (0x4485009Eu)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (160u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0x8C8500A0u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (162u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x488500A2u)

#define CapSense_1_BUTTON5_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button5.fingerCap)
#define CapSense_1_BUTTON5_FINGER_CAP_OFFSET                (164u)
#define CapSense_1_BUTTON5_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON5_FINGER_CAP_PARAM_ID              (0xAB0500A4u)

#define CapSense_1_BUTTON5_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button5.sigPFC)
#define CapSense_1_BUTTON5_SIGPFC_OFFSET                    (166u)
#define CapSense_1_BUTTON5_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON5_SIGPFC_PARAM_ID                  (0xA70500A6u)

#define CapSense_1_BUTTON6_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button6.resolution)
#define CapSense_1_BUTTON6_RESOLUTION_OFFSET                (168u)
#define CapSense_1_BUTTON6_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON6_RESOLUTION_PARAM_ID              (0x8B8600A8u)

#define CapSense_1_BUTTON6_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.fingerTh)
#define CapSense_1_BUTTON6_FINGER_TH_OFFSET                 (170u)
#define CapSense_1_BUTTON6_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON6_FINGER_TH_PARAM_ID               (0x878600AAu)

#define CapSense_1_BUTTON6_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button6.noiseTh)
#define CapSense_1_BUTTON6_NOISE_TH_OFFSET                  (172u)
#define CapSense_1_BUTTON6_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON6_NOISE_TH_PARAM_ID                (0x428600ACu)

#define CapSense_1_BUTTON6_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_1_BUTTON6_NNOISE_TH_OFFSET                 (173u)
#define CapSense_1_BUTTON6_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON6_NNOISE_TH_PARAM_ID               (0x448600ADu)

#define CapSense_1_BUTTON6_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button6.hysteresis)
#define CapSense_1_BUTTON6_HYSTERESIS_OFFSET                (174u)
#define CapSense_1_BUTTON6_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON6_HYSTERESIS_PARAM_ID              (0x4E8600AEu)

#define CapSense_1_BUTTON6_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button6.onDebounce)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_OFFSET               (175u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_PARAM_ID             (0x488600AFu)

#define CapSense_1_BUTTON6_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_OFFSET              (176u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_PARAM_ID            (0x448600B0u)

#define CapSense_1_BUTTON6_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_1_BUTTON6_IDAC_MOD0_OFFSET                 (177u)
#define CapSense_1_BUTTON6_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD0_PARAM_ID               (0x4F0600B1u)

#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button6.idacGainIndex)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_OFFSET           (178u)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_PARAM_ID         (0x488600B2u)

#define CapSense_1_BUTTON6_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button6.snsClk)
#define CapSense_1_BUTTON6_SNS_CLK_OFFSET                   (180u)
#define CapSense_1_BUTTON6_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON6_SNS_CLK_PARAM_ID                 (0x8D8600B4u)

#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_OFFSET            (182u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_PARAM_ID          (0x498600B6u)

#define CapSense_1_BUTTON6_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button6.fingerCap)
#define CapSense_1_BUTTON6_FINGER_CAP_OFFSET                (184u)
#define CapSense_1_BUTTON6_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON6_FINGER_CAP_PARAM_ID              (0xA80600B8u)

#define CapSense_1_BUTTON6_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button6.sigPFC)
#define CapSense_1_BUTTON6_SIGPFC_OFFSET                    (186u)
#define CapSense_1_BUTTON6_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON6_SIGPFC_PARAM_ID                  (0xA40600BAu)

#define CapSense_1_BUTTON7_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button7.resolution)
#define CapSense_1_BUTTON7_RESOLUTION_OFFSET                (188u)
#define CapSense_1_BUTTON7_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON7_RESOLUTION_PARAM_ID              (0x8C8700BCu)

#define CapSense_1_BUTTON7_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.fingerTh)
#define CapSense_1_BUTTON7_FINGER_TH_OFFSET                 (190u)
#define CapSense_1_BUTTON7_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON7_FINGER_TH_PARAM_ID               (0x808700BEu)

#define CapSense_1_BUTTON7_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button7.noiseTh)
#define CapSense_1_BUTTON7_NOISE_TH_OFFSET                  (192u)
#define CapSense_1_BUTTON7_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON7_NOISE_TH_PARAM_ID                (0x458700C0u)

#define CapSense_1_BUTTON7_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_1_BUTTON7_NNOISE_TH_OFFSET                 (193u)
#define CapSense_1_BUTTON7_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON7_NNOISE_TH_PARAM_ID               (0x438700C1u)

#define CapSense_1_BUTTON7_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button7.hysteresis)
#define CapSense_1_BUTTON7_HYSTERESIS_OFFSET                (194u)
#define CapSense_1_BUTTON7_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON7_HYSTERESIS_PARAM_ID              (0x498700C2u)

#define CapSense_1_BUTTON7_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button7.onDebounce)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_OFFSET               (195u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_PARAM_ID             (0x4F8700C3u)

#define CapSense_1_BUTTON7_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_OFFSET              (196u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_PARAM_ID            (0x448700C4u)

#define CapSense_1_BUTTON7_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_1_BUTTON7_IDAC_MOD0_OFFSET                 (197u)
#define CapSense_1_BUTTON7_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD0_PARAM_ID               (0x4F0700C5u)

#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button7.idacGainIndex)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_OFFSET           (198u)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_PARAM_ID         (0x488700C6u)

#define CapSense_1_BUTTON7_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button7.snsClk)
#define CapSense_1_BUTTON7_SNS_CLK_OFFSET                   (200u)
#define CapSense_1_BUTTON7_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON7_SNS_CLK_PARAM_ID                 (0x8F8700C8u)

#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_OFFSET            (202u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_PARAM_ID          (0x4B8700CAu)

#define CapSense_1_BUTTON7_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button7.fingerCap)
#define CapSense_1_BUTTON7_FINGER_CAP_OFFSET                (204u)
#define CapSense_1_BUTTON7_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON7_FINGER_CAP_PARAM_ID              (0xA80700CCu)

#define CapSense_1_BUTTON7_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button7.sigPFC)
#define CapSense_1_BUTTON7_SIGPFC_OFFSET                    (206u)
#define CapSense_1_BUTTON7_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON7_SIGPFC_PARAM_ID                  (0xA40700CEu)

#define CapSense_1_BUTTON8_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button8.resolution)
#define CapSense_1_BUTTON8_RESOLUTION_OFFSET                (208u)
#define CapSense_1_BUTTON8_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON8_RESOLUTION_PARAM_ID              (0x808800D0u)

#define CapSense_1_BUTTON8_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.fingerTh)
#define CapSense_1_BUTTON8_FINGER_TH_OFFSET                 (210u)
#define CapSense_1_BUTTON8_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON8_FINGER_TH_PARAM_ID               (0x8C8800D2u)

#define CapSense_1_BUTTON8_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button8.noiseTh)
#define CapSense_1_BUTTON8_NOISE_TH_OFFSET                  (212u)
#define CapSense_1_BUTTON8_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON8_NOISE_TH_PARAM_ID                (0x498800D4u)

#define CapSense_1_BUTTON8_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.nNoiseTh)
#define CapSense_1_BUTTON8_NNOISE_TH_OFFSET                 (213u)
#define CapSense_1_BUTTON8_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON8_NNOISE_TH_PARAM_ID               (0x4F8800D5u)

#define CapSense_1_BUTTON8_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button8.hysteresis)
#define CapSense_1_BUTTON8_HYSTERESIS_OFFSET                (214u)
#define CapSense_1_BUTTON8_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON8_HYSTERESIS_PARAM_ID              (0x458800D6u)

#define CapSense_1_BUTTON8_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button8.onDebounce)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_OFFSET               (215u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_PARAM_ID             (0x438800D7u)

#define CapSense_1_BUTTON8_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button8.lowBslnRst)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_OFFSET              (216u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_PARAM_ID            (0x4A8800D8u)

#define CapSense_1_BUTTON8_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button8.idacMod[0u])
#define CapSense_1_BUTTON8_IDAC_MOD0_OFFSET                 (217u)
#define CapSense_1_BUTTON8_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON8_IDAC_MOD0_PARAM_ID               (0x410800D9u)

#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button8.idacGainIndex)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_OFFSET           (218u)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_PARAM_ID         (0x468800DAu)

#define CapSense_1_BUTTON8_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button8.snsClk)
#define CapSense_1_BUTTON8_SNS_CLK_OFFSET                   (220u)
#define CapSense_1_BUTTON8_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON8_SNS_CLK_PARAM_ID                 (0x838800DCu)

#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button8.snsClkSource)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_OFFSET            (222u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_PARAM_ID          (0x478800DEu)

#define CapSense_1_BUTTON8_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button8.fingerCap)
#define CapSense_1_BUTTON8_FINGER_CAP_OFFSET                (224u)
#define CapSense_1_BUTTON8_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON8_FINGER_CAP_PARAM_ID              (0xA90800E0u)

#define CapSense_1_BUTTON8_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button8.sigPFC)
#define CapSense_1_BUTTON8_SIGPFC_OFFSET                    (226u)
#define CapSense_1_BUTTON8_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON8_SIGPFC_PARAM_ID                  (0xA50800E2u)

#define CapSense_1_BUTTON9_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button9.resolution)
#define CapSense_1_BUTTON9_RESOLUTION_OFFSET                (228u)
#define CapSense_1_BUTTON9_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON9_RESOLUTION_PARAM_ID              (0x8D8900E4u)

#define CapSense_1_BUTTON9_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.fingerTh)
#define CapSense_1_BUTTON9_FINGER_TH_OFFSET                 (230u)
#define CapSense_1_BUTTON9_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON9_FINGER_TH_PARAM_ID               (0x818900E6u)

#define CapSense_1_BUTTON9_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button9.noiseTh)
#define CapSense_1_BUTTON9_NOISE_TH_OFFSET                  (232u)
#define CapSense_1_BUTTON9_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON9_NOISE_TH_PARAM_ID                (0x468900E8u)

#define CapSense_1_BUTTON9_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.nNoiseTh)
#define CapSense_1_BUTTON9_NNOISE_TH_OFFSET                 (233u)
#define CapSense_1_BUTTON9_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON9_NNOISE_TH_PARAM_ID               (0x408900E9u)

#define CapSense_1_BUTTON9_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button9.hysteresis)
#define CapSense_1_BUTTON9_HYSTERESIS_OFFSET                (234u)
#define CapSense_1_BUTTON9_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON9_HYSTERESIS_PARAM_ID              (0x4A8900EAu)

#define CapSense_1_BUTTON9_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button9.onDebounce)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_OFFSET               (235u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_PARAM_ID             (0x4C8900EBu)

#define CapSense_1_BUTTON9_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button9.lowBslnRst)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_OFFSET              (236u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_PARAM_ID            (0x478900ECu)

#define CapSense_1_BUTTON9_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button9.idacMod[0u])
#define CapSense_1_BUTTON9_IDAC_MOD0_OFFSET                 (237u)
#define CapSense_1_BUTTON9_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON9_IDAC_MOD0_PARAM_ID               (0x4C0900EDu)

#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button9.idacGainIndex)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_OFFSET           (238u)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_PARAM_ID         (0x4B8900EEu)

#define CapSense_1_BUTTON9_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button9.snsClk)
#define CapSense_1_BUTTON9_SNS_CLK_OFFSET                   (240u)
#define CapSense_1_BUTTON9_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON9_SNS_CLK_PARAM_ID                 (0x898900F0u)

#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button9.snsClkSource)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_OFFSET            (242u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_PARAM_ID          (0x4D8900F2u)

#define CapSense_1_BUTTON9_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button9.fingerCap)
#define CapSense_1_BUTTON9_FINGER_CAP_OFFSET                (244u)
#define CapSense_1_BUTTON9_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON9_FINGER_CAP_PARAM_ID              (0xAE0900F4u)

#define CapSense_1_BUTTON9_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button9.sigPFC)
#define CapSense_1_BUTTON9_SIGPFC_OFFSET                    (246u)
#define CapSense_1_BUTTON9_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON9_SIGPFC_PARAM_ID                  (0xA20900F6u)

#define CapSense_1_BUTTON10_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button10.resolution)
#define CapSense_1_BUTTON10_RESOLUTION_OFFSET               (248u)
#define CapSense_1_BUTTON10_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON10_RESOLUTION_PARAM_ID             (0x8E8A00F8u)

#define CapSense_1_BUTTON10_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.fingerTh)
#define CapSense_1_BUTTON10_FINGER_TH_OFFSET                (250u)
#define CapSense_1_BUTTON10_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON10_FINGER_TH_PARAM_ID              (0x828A00FAu)

#define CapSense_1_BUTTON10_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button10.noiseTh)
#define CapSense_1_BUTTON10_NOISE_TH_OFFSET                 (252u)
#define CapSense_1_BUTTON10_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON10_NOISE_TH_PARAM_ID               (0x478A00FCu)

#define CapSense_1_BUTTON10_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.nNoiseTh)
#define CapSense_1_BUTTON10_NNOISE_TH_OFFSET                (253u)
#define CapSense_1_BUTTON10_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON10_NNOISE_TH_PARAM_ID              (0x418A00FDu)

#define CapSense_1_BUTTON10_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button10.hysteresis)
#define CapSense_1_BUTTON10_HYSTERESIS_OFFSET               (254u)
#define CapSense_1_BUTTON10_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON10_HYSTERESIS_PARAM_ID             (0x4B8A00FEu)

#define CapSense_1_BUTTON10_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button10.onDebounce)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_OFFSET              (255u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_PARAM_ID            (0x4D8A00FFu)

#define CapSense_1_BUTTON10_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button10.lowBslnRst)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_OFFSET             (256u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_PARAM_ID           (0x4E8A0100u)

#define CapSense_1_BUTTON10_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button10.idacMod[0u])
#define CapSense_1_BUTTON10_IDAC_MOD0_OFFSET                (257u)
#define CapSense_1_BUTTON10_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON10_IDAC_MOD0_PARAM_ID              (0x450A0101u)

#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button10.idacGainIndex)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_OFFSET          (258u)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_PARAM_ID        (0x428A0102u)

#define CapSense_1_BUTTON10_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button10.snsClk)
#define CapSense_1_BUTTON10_SNS_CLK_OFFSET                  (260u)
#define CapSense_1_BUTTON10_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON10_SNS_CLK_PARAM_ID                (0x878A0104u)

#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button10.snsClkSource)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_OFFSET           (262u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_PARAM_ID         (0x438A0106u)

#define CapSense_1_BUTTON10_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button10.fingerCap)
#define CapSense_1_BUTTON10_FINGER_CAP_OFFSET               (264u)
#define CapSense_1_BUTTON10_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON10_FINGER_CAP_PARAM_ID             (0xA20A0108u)

#define CapSense_1_BUTTON10_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button10.sigPFC)
#define CapSense_1_BUTTON10_SIGPFC_OFFSET                   (266u)
#define CapSense_1_BUTTON10_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON10_SIGPFC_PARAM_ID                 (0xAE0A010Au)

#define CapSense_1_BUTTON11_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button11.resolution)
#define CapSense_1_BUTTON11_RESOLUTION_OFFSET               (268u)
#define CapSense_1_BUTTON11_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON11_RESOLUTION_PARAM_ID             (0x868B010Cu)

#define CapSense_1_BUTTON11_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.fingerTh)
#define CapSense_1_BUTTON11_FINGER_TH_OFFSET                (270u)
#define CapSense_1_BUTTON11_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON11_FINGER_TH_PARAM_ID              (0x8A8B010Eu)

#define CapSense_1_BUTTON11_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button11.noiseTh)
#define CapSense_1_BUTTON11_NOISE_TH_OFFSET                 (272u)
#define CapSense_1_BUTTON11_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON11_NOISE_TH_PARAM_ID               (0x488B0110u)

#define CapSense_1_BUTTON11_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.nNoiseTh)
#define CapSense_1_BUTTON11_NNOISE_TH_OFFSET                (273u)
#define CapSense_1_BUTTON11_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON11_NNOISE_TH_PARAM_ID              (0x4E8B0111u)

#define CapSense_1_BUTTON11_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button11.hysteresis)
#define CapSense_1_BUTTON11_HYSTERESIS_OFFSET               (274u)
#define CapSense_1_BUTTON11_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON11_HYSTERESIS_PARAM_ID             (0x448B0112u)

#define CapSense_1_BUTTON11_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button11.onDebounce)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_OFFSET              (275u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_PARAM_ID            (0x428B0113u)

#define CapSense_1_BUTTON11_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button11.lowBslnRst)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_OFFSET             (276u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_PARAM_ID           (0x498B0114u)

#define CapSense_1_BUTTON11_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button11.idacMod[0u])
#define CapSense_1_BUTTON11_IDAC_MOD0_OFFSET                (277u)
#define CapSense_1_BUTTON11_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON11_IDAC_MOD0_PARAM_ID              (0x420B0115u)

#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button11.idacGainIndex)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_OFFSET          (278u)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_PARAM_ID        (0x458B0116u)

#define CapSense_1_BUTTON11_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button11.snsClk)
#define CapSense_1_BUTTON11_SNS_CLK_OFFSET                  (280u)
#define CapSense_1_BUTTON11_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON11_SNS_CLK_PARAM_ID                (0x828B0118u)

#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button11.snsClkSource)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_OFFSET           (282u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_PARAM_ID         (0x468B011Au)

#define CapSense_1_BUTTON11_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button11.fingerCap)
#define CapSense_1_BUTTON11_FINGER_CAP_OFFSET               (284u)
#define CapSense_1_BUTTON11_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON11_FINGER_CAP_PARAM_ID             (0xA50B011Cu)

#define CapSense_1_BUTTON11_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button11.sigPFC)
#define CapSense_1_BUTTON11_SIGPFC_OFFSET                   (286u)
#define CapSense_1_BUTTON11_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON11_SIGPFC_PARAM_ID                 (0xA90B011Eu)

#define CapSense_1_BUTTON12_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button12.resolution)
#define CapSense_1_BUTTON12_RESOLUTION_OFFSET               (288u)
#define CapSense_1_BUTTON12_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON12_RESOLUTION_PARAM_ID             (0x868C0120u)

#define CapSense_1_BUTTON12_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button12.fingerTh)
#define CapSense_1_BUTTON12_FINGER_TH_OFFSET                (290u)
#define CapSense_1_BUTTON12_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON12_FINGER_TH_PARAM_ID              (0x8A8C0122u)

#define CapSense_1_BUTTON12_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button12.noiseTh)
#define CapSense_1_BUTTON12_NOISE_TH_OFFSET                 (292u)
#define CapSense_1_BUTTON12_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON12_NOISE_TH_PARAM_ID               (0x4F8C0124u)

#define CapSense_1_BUTTON12_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button12.nNoiseTh)
#define CapSense_1_BUTTON12_NNOISE_TH_OFFSET                (293u)
#define CapSense_1_BUTTON12_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON12_NNOISE_TH_PARAM_ID              (0x498C0125u)

#define CapSense_1_BUTTON12_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button12.hysteresis)
#define CapSense_1_BUTTON12_HYSTERESIS_OFFSET               (294u)
#define CapSense_1_BUTTON12_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON12_HYSTERESIS_PARAM_ID             (0x438C0126u)

#define CapSense_1_BUTTON12_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button12.onDebounce)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_OFFSET              (295u)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_PARAM_ID            (0x458C0127u)

#define CapSense_1_BUTTON12_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button12.lowBslnRst)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_OFFSET             (296u)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_PARAM_ID           (0x4C8C0128u)

#define CapSense_1_BUTTON12_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button12.idacMod[0u])
#define CapSense_1_BUTTON12_IDAC_MOD0_OFFSET                (297u)
#define CapSense_1_BUTTON12_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON12_IDAC_MOD0_PARAM_ID              (0x470C0129u)

#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button12.idacGainIndex)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_OFFSET          (298u)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_PARAM_ID        (0x408C012Au)

#define CapSense_1_BUTTON12_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button12.snsClk)
#define CapSense_1_BUTTON12_SNS_CLK_OFFSET                  (300u)
#define CapSense_1_BUTTON12_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON12_SNS_CLK_PARAM_ID                (0x858C012Cu)

#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button12.snsClkSource)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_OFFSET           (302u)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_PARAM_ID         (0x418C012Eu)

#define CapSense_1_BUTTON12_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button12.fingerCap)
#define CapSense_1_BUTTON12_FINGER_CAP_OFFSET               (304u)
#define CapSense_1_BUTTON12_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON12_FINGER_CAP_PARAM_ID             (0xA50C0130u)

#define CapSense_1_BUTTON12_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button12.sigPFC)
#define CapSense_1_BUTTON12_SIGPFC_OFFSET                   (306u)
#define CapSense_1_BUTTON12_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON12_SIGPFC_PARAM_ID                 (0xA90C0132u)

#define CapSense_1_BUTTON13_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button13.resolution)
#define CapSense_1_BUTTON13_RESOLUTION_OFFSET               (308u)
#define CapSense_1_BUTTON13_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON13_RESOLUTION_PARAM_ID             (0x818D0134u)

#define CapSense_1_BUTTON13_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button13.fingerTh)
#define CapSense_1_BUTTON13_FINGER_TH_OFFSET                (310u)
#define CapSense_1_BUTTON13_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON13_FINGER_TH_PARAM_ID              (0x8D8D0136u)

#define CapSense_1_BUTTON13_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button13.noiseTh)
#define CapSense_1_BUTTON13_NOISE_TH_OFFSET                 (312u)
#define CapSense_1_BUTTON13_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON13_NOISE_TH_PARAM_ID               (0x4A8D0138u)

#define CapSense_1_BUTTON13_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button13.nNoiseTh)
#define CapSense_1_BUTTON13_NNOISE_TH_OFFSET                (313u)
#define CapSense_1_BUTTON13_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON13_NNOISE_TH_PARAM_ID              (0x4C8D0139u)

#define CapSense_1_BUTTON13_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button13.hysteresis)
#define CapSense_1_BUTTON13_HYSTERESIS_OFFSET               (314u)
#define CapSense_1_BUTTON13_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON13_HYSTERESIS_PARAM_ID             (0x468D013Au)

#define CapSense_1_BUTTON13_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button13.onDebounce)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_OFFSET              (315u)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_PARAM_ID            (0x408D013Bu)

#define CapSense_1_BUTTON13_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button13.lowBslnRst)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_OFFSET             (316u)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_PARAM_ID           (0x4B8D013Cu)

#define CapSense_1_BUTTON13_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button13.idacMod[0u])
#define CapSense_1_BUTTON13_IDAC_MOD0_OFFSET                (317u)
#define CapSense_1_BUTTON13_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON13_IDAC_MOD0_PARAM_ID              (0x400D013Du)

#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button13.idacGainIndex)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_OFFSET          (318u)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_PARAM_ID        (0x478D013Eu)

#define CapSense_1_BUTTON13_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button13.snsClk)
#define CapSense_1_BUTTON13_SNS_CLK_OFFSET                  (320u)
#define CapSense_1_BUTTON13_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON13_SNS_CLK_PARAM_ID                (0x828D0140u)

#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button13.snsClkSource)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_OFFSET           (322u)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_PARAM_ID         (0x468D0142u)

#define CapSense_1_BUTTON13_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button13.fingerCap)
#define CapSense_1_BUTTON13_FINGER_CAP_OFFSET               (324u)
#define CapSense_1_BUTTON13_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON13_FINGER_CAP_PARAM_ID             (0xA50D0144u)

#define CapSense_1_BUTTON13_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button13.sigPFC)
#define CapSense_1_BUTTON13_SIGPFC_OFFSET                   (326u)
#define CapSense_1_BUTTON13_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON13_SIGPFC_PARAM_ID                 (0xA90D0146u)

#define CapSense_1_BUTTON14_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button14.resolution)
#define CapSense_1_BUTTON14_RESOLUTION_OFFSET               (328u)
#define CapSense_1_BUTTON14_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON14_RESOLUTION_PARAM_ID             (0x858E0148u)

#define CapSense_1_BUTTON14_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button14.fingerTh)
#define CapSense_1_BUTTON14_FINGER_TH_OFFSET                (330u)
#define CapSense_1_BUTTON14_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON14_FINGER_TH_PARAM_ID              (0x898E014Au)

#define CapSense_1_BUTTON14_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button14.noiseTh)
#define CapSense_1_BUTTON14_NOISE_TH_OFFSET                 (332u)
#define CapSense_1_BUTTON14_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON14_NOISE_TH_PARAM_ID               (0x4C8E014Cu)

#define CapSense_1_BUTTON14_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button14.nNoiseTh)
#define CapSense_1_BUTTON14_NNOISE_TH_OFFSET                (333u)
#define CapSense_1_BUTTON14_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON14_NNOISE_TH_PARAM_ID              (0x4A8E014Du)

#define CapSense_1_BUTTON14_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button14.hysteresis)
#define CapSense_1_BUTTON14_HYSTERESIS_OFFSET               (334u)
#define CapSense_1_BUTTON14_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON14_HYSTERESIS_PARAM_ID             (0x408E014Eu)

#define CapSense_1_BUTTON14_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button14.onDebounce)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_OFFSET              (335u)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_PARAM_ID            (0x468E014Fu)

#define CapSense_1_BUTTON14_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button14.lowBslnRst)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_OFFSET             (336u)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_PARAM_ID           (0x4A8E0150u)

#define CapSense_1_BUTTON14_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button14.idacMod[0u])
#define CapSense_1_BUTTON14_IDAC_MOD0_OFFSET                (337u)
#define CapSense_1_BUTTON14_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON14_IDAC_MOD0_PARAM_ID              (0x410E0151u)

#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button14.idacGainIndex)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_OFFSET          (338u)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_PARAM_ID        (0x468E0152u)

#define CapSense_1_BUTTON14_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button14.snsClk)
#define CapSense_1_BUTTON14_SNS_CLK_OFFSET                  (340u)
#define CapSense_1_BUTTON14_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON14_SNS_CLK_PARAM_ID                (0x838E0154u)

#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button14.snsClkSource)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_OFFSET           (342u)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_PARAM_ID         (0x478E0156u)

#define CapSense_1_BUTTON14_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button14.fingerCap)
#define CapSense_1_BUTTON14_FINGER_CAP_OFFSET               (344u)
#define CapSense_1_BUTTON14_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON14_FINGER_CAP_PARAM_ID             (0xA60E0158u)

#define CapSense_1_BUTTON14_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button14.sigPFC)
#define CapSense_1_BUTTON14_SIGPFC_OFFSET                   (346u)
#define CapSense_1_BUTTON14_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON14_SIGPFC_PARAM_ID                 (0xAA0E015Au)

#define CapSense_1_BUTTON15_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button15.resolution)
#define CapSense_1_BUTTON15_RESOLUTION_OFFSET               (348u)
#define CapSense_1_BUTTON15_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON15_RESOLUTION_PARAM_ID             (0x828F015Cu)

#define CapSense_1_BUTTON15_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button15.fingerTh)
#define CapSense_1_BUTTON15_FINGER_TH_OFFSET                (350u)
#define CapSense_1_BUTTON15_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON15_FINGER_TH_PARAM_ID              (0x8E8F015Eu)

#define CapSense_1_BUTTON15_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button15.noiseTh)
#define CapSense_1_BUTTON15_NOISE_TH_OFFSET                 (352u)
#define CapSense_1_BUTTON15_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON15_NOISE_TH_PARAM_ID               (0x468F0160u)

#define CapSense_1_BUTTON15_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button15.nNoiseTh)
#define CapSense_1_BUTTON15_NNOISE_TH_OFFSET                (353u)
#define CapSense_1_BUTTON15_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON15_NNOISE_TH_PARAM_ID              (0x408F0161u)

#define CapSense_1_BUTTON15_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button15.hysteresis)
#define CapSense_1_BUTTON15_HYSTERESIS_OFFSET               (354u)
#define CapSense_1_BUTTON15_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON15_HYSTERESIS_PARAM_ID             (0x4A8F0162u)

#define CapSense_1_BUTTON15_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button15.onDebounce)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_OFFSET              (355u)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_PARAM_ID            (0x4C8F0163u)

#define CapSense_1_BUTTON15_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button15.lowBslnRst)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_OFFSET             (356u)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_PARAM_ID           (0x478F0164u)

#define CapSense_1_BUTTON15_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button15.idacMod[0u])
#define CapSense_1_BUTTON15_IDAC_MOD0_OFFSET                (357u)
#define CapSense_1_BUTTON15_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON15_IDAC_MOD0_PARAM_ID              (0x4C0F0165u)

#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button15.idacGainIndex)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_OFFSET          (358u)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_PARAM_ID        (0x4B8F0166u)

#define CapSense_1_BUTTON15_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button15.snsClk)
#define CapSense_1_BUTTON15_SNS_CLK_OFFSET                  (360u)
#define CapSense_1_BUTTON15_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON15_SNS_CLK_PARAM_ID                (0x8C8F0168u)

#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button15.snsClkSource)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_OFFSET           (362u)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_PARAM_ID         (0x488F016Au)

#define CapSense_1_BUTTON15_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button15.fingerCap)
#define CapSense_1_BUTTON15_FINGER_CAP_OFFSET               (364u)
#define CapSense_1_BUTTON15_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON15_FINGER_CAP_PARAM_ID             (0xAB0F016Cu)

#define CapSense_1_BUTTON15_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button15.sigPFC)
#define CapSense_1_BUTTON15_SIGPFC_OFFSET                   (366u)
#define CapSense_1_BUTTON15_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON15_SIGPFC_PARAM_ID                 (0xA70F016Eu)

#define CapSense_1_BUTTON16_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button16.resolution)
#define CapSense_1_BUTTON16_RESOLUTION_OFFSET               (368u)
#define CapSense_1_BUTTON16_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON16_RESOLUTION_PARAM_ID             (0x8D900170u)

#define CapSense_1_BUTTON16_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button16.fingerTh)
#define CapSense_1_BUTTON16_FINGER_TH_OFFSET                (370u)
#define CapSense_1_BUTTON16_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON16_FINGER_TH_PARAM_ID              (0x81900172u)

#define CapSense_1_BUTTON16_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button16.noiseTh)
#define CapSense_1_BUTTON16_NOISE_TH_OFFSET                 (372u)
#define CapSense_1_BUTTON16_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON16_NOISE_TH_PARAM_ID               (0x44900174u)

#define CapSense_1_BUTTON16_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button16.nNoiseTh)
#define CapSense_1_BUTTON16_NNOISE_TH_OFFSET                (373u)
#define CapSense_1_BUTTON16_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON16_NNOISE_TH_PARAM_ID              (0x42900175u)

#define CapSense_1_BUTTON16_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button16.hysteresis)
#define CapSense_1_BUTTON16_HYSTERESIS_OFFSET               (374u)
#define CapSense_1_BUTTON16_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON16_HYSTERESIS_PARAM_ID             (0x48900176u)

#define CapSense_1_BUTTON16_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button16.onDebounce)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_OFFSET              (375u)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_PARAM_ID            (0x4E900177u)

#define CapSense_1_BUTTON16_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button16.lowBslnRst)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_OFFSET             (376u)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_PARAM_ID           (0x47900178u)

#define CapSense_1_BUTTON16_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button16.idacMod[0u])
#define CapSense_1_BUTTON16_IDAC_MOD0_OFFSET                (377u)
#define CapSense_1_BUTTON16_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON16_IDAC_MOD0_PARAM_ID              (0x4C100179u)

#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button16.idacGainIndex)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_OFFSET          (378u)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_PARAM_ID        (0x4B90017Au)

#define CapSense_1_BUTTON16_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button16.snsClk)
#define CapSense_1_BUTTON16_SNS_CLK_OFFSET                  (380u)
#define CapSense_1_BUTTON16_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON16_SNS_CLK_PARAM_ID                (0x8E90017Cu)

#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button16.snsClkSource)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_OFFSET           (382u)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_PARAM_ID         (0x4A90017Eu)

#define CapSense_1_BUTTON16_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button16.fingerCap)
#define CapSense_1_BUTTON16_FINGER_CAP_OFFSET               (384u)
#define CapSense_1_BUTTON16_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON16_FINGER_CAP_PARAM_ID             (0xAA100180u)

#define CapSense_1_BUTTON16_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button16.sigPFC)
#define CapSense_1_BUTTON16_SIGPFC_OFFSET                   (386u)
#define CapSense_1_BUTTON16_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON16_SIGPFC_PARAM_ID                 (0xA6100182u)

#define CapSense_1_BUTTON17_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button17.resolution)
#define CapSense_1_BUTTON17_RESOLUTION_OFFSET               (388u)
#define CapSense_1_BUTTON17_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON17_RESOLUTION_PARAM_ID             (0x8E910184u)

#define CapSense_1_BUTTON17_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button17.fingerTh)
#define CapSense_1_BUTTON17_FINGER_TH_OFFSET                (390u)
#define CapSense_1_BUTTON17_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON17_FINGER_TH_PARAM_ID              (0x82910186u)

#define CapSense_1_BUTTON17_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button17.noiseTh)
#define CapSense_1_BUTTON17_NOISE_TH_OFFSET                 (392u)
#define CapSense_1_BUTTON17_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON17_NOISE_TH_PARAM_ID               (0x45910188u)

#define CapSense_1_BUTTON17_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button17.nNoiseTh)
#define CapSense_1_BUTTON17_NNOISE_TH_OFFSET                (393u)
#define CapSense_1_BUTTON17_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON17_NNOISE_TH_PARAM_ID              (0x43910189u)

#define CapSense_1_BUTTON17_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button17.hysteresis)
#define CapSense_1_BUTTON17_HYSTERESIS_OFFSET               (394u)
#define CapSense_1_BUTTON17_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON17_HYSTERESIS_PARAM_ID             (0x4991018Au)

#define CapSense_1_BUTTON17_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button17.onDebounce)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_OFFSET              (395u)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_PARAM_ID            (0x4F91018Bu)

#define CapSense_1_BUTTON17_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button17.lowBslnRst)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_OFFSET             (396u)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_PARAM_ID           (0x4491018Cu)

#define CapSense_1_BUTTON17_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button17.idacMod[0u])
#define CapSense_1_BUTTON17_IDAC_MOD0_OFFSET                (397u)
#define CapSense_1_BUTTON17_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON17_IDAC_MOD0_PARAM_ID              (0x4F11018Du)

#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button17.idacGainIndex)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_OFFSET          (398u)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_PARAM_ID        (0x4891018Eu)

#define CapSense_1_BUTTON17_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button17.snsClk)
#define CapSense_1_BUTTON17_SNS_CLK_OFFSET                  (400u)
#define CapSense_1_BUTTON17_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON17_SNS_CLK_PARAM_ID                (0x8A910190u)

#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button17.snsClkSource)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_OFFSET           (402u)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_PARAM_ID         (0x4E910192u)

#define CapSense_1_BUTTON17_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button17.fingerCap)
#define CapSense_1_BUTTON17_FINGER_CAP_OFFSET               (404u)
#define CapSense_1_BUTTON17_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON17_FINGER_CAP_PARAM_ID             (0xAD110194u)

#define CapSense_1_BUTTON17_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button17.sigPFC)
#define CapSense_1_BUTTON17_SIGPFC_OFFSET                   (406u)
#define CapSense_1_BUTTON17_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON17_SIGPFC_PARAM_ID                 (0xA1110196u)

#define CapSense_1_BUTTON18_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button18.resolution)
#define CapSense_1_BUTTON18_RESOLUTION_OFFSET               (408u)
#define CapSense_1_BUTTON18_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON18_RESOLUTION_PARAM_ID             (0x8D920198u)

#define CapSense_1_BUTTON18_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button18.fingerTh)
#define CapSense_1_BUTTON18_FINGER_TH_OFFSET                (410u)
#define CapSense_1_BUTTON18_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON18_FINGER_TH_PARAM_ID              (0x8192019Au)

#define CapSense_1_BUTTON18_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button18.noiseTh)
#define CapSense_1_BUTTON18_NOISE_TH_OFFSET                 (412u)
#define CapSense_1_BUTTON18_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON18_NOISE_TH_PARAM_ID               (0x4492019Cu)

#define CapSense_1_BUTTON18_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button18.nNoiseTh)
#define CapSense_1_BUTTON18_NNOISE_TH_OFFSET                (413u)
#define CapSense_1_BUTTON18_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON18_NNOISE_TH_PARAM_ID              (0x4292019Du)

#define CapSense_1_BUTTON18_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button18.hysteresis)
#define CapSense_1_BUTTON18_HYSTERESIS_OFFSET               (414u)
#define CapSense_1_BUTTON18_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON18_HYSTERESIS_PARAM_ID             (0x4892019Eu)

#define CapSense_1_BUTTON18_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button18.onDebounce)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_OFFSET              (415u)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_PARAM_ID            (0x4E92019Fu)

#define CapSense_1_BUTTON18_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button18.lowBslnRst)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_OFFSET             (416u)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_PARAM_ID           (0x489201A0u)

#define CapSense_1_BUTTON18_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button18.idacMod[0u])
#define CapSense_1_BUTTON18_IDAC_MOD0_OFFSET                (417u)
#define CapSense_1_BUTTON18_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON18_IDAC_MOD0_PARAM_ID              (0x431201A1u)

#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button18.idacGainIndex)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_OFFSET          (418u)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_PARAM_ID        (0x449201A2u)

#define CapSense_1_BUTTON18_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button18.snsClk)
#define CapSense_1_BUTTON18_SNS_CLK_OFFSET                  (420u)
#define CapSense_1_BUTTON18_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON18_SNS_CLK_PARAM_ID                (0x819201A4u)

#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button18.snsClkSource)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_OFFSET           (422u)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_PARAM_ID         (0x459201A6u)

#define CapSense_1_BUTTON18_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button18.fingerCap)
#define CapSense_1_BUTTON18_FINGER_CAP_OFFSET               (424u)
#define CapSense_1_BUTTON18_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON18_FINGER_CAP_PARAM_ID             (0xA41201A8u)

#define CapSense_1_BUTTON18_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button18.sigPFC)
#define CapSense_1_BUTTON18_SIGPFC_OFFSET                   (426u)
#define CapSense_1_BUTTON18_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON18_SIGPFC_PARAM_ID                 (0xA81201AAu)

#define CapSense_1_BUTTON19_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button19.resolution)
#define CapSense_1_BUTTON19_RESOLUTION_OFFSET               (428u)
#define CapSense_1_BUTTON19_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON19_RESOLUTION_PARAM_ID             (0x809301ACu)

#define CapSense_1_BUTTON19_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button19.fingerTh)
#define CapSense_1_BUTTON19_FINGER_TH_OFFSET                (430u)
#define CapSense_1_BUTTON19_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON19_FINGER_TH_PARAM_ID              (0x8C9301AEu)

#define CapSense_1_BUTTON19_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button19.noiseTh)
#define CapSense_1_BUTTON19_NOISE_TH_OFFSET                 (432u)
#define CapSense_1_BUTTON19_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON19_NOISE_TH_PARAM_ID               (0x4E9301B0u)

#define CapSense_1_BUTTON19_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button19.nNoiseTh)
#define CapSense_1_BUTTON19_NNOISE_TH_OFFSET                (433u)
#define CapSense_1_BUTTON19_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON19_NNOISE_TH_PARAM_ID              (0x489301B1u)

#define CapSense_1_BUTTON19_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button19.hysteresis)
#define CapSense_1_BUTTON19_HYSTERESIS_OFFSET               (434u)
#define CapSense_1_BUTTON19_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON19_HYSTERESIS_PARAM_ID             (0x429301B2u)

#define CapSense_1_BUTTON19_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button19.onDebounce)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_OFFSET              (435u)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_PARAM_ID            (0x449301B3u)

#define CapSense_1_BUTTON19_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button19.lowBslnRst)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_OFFSET             (436u)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_PARAM_ID           (0x4F9301B4u)

#define CapSense_1_BUTTON19_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button19.idacMod[0u])
#define CapSense_1_BUTTON19_IDAC_MOD0_OFFSET                (437u)
#define CapSense_1_BUTTON19_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON19_IDAC_MOD0_PARAM_ID              (0x441301B5u)

#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button19.idacGainIndex)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_OFFSET          (438u)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_PARAM_ID        (0x439301B6u)

#define CapSense_1_BUTTON19_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button19.snsClk)
#define CapSense_1_BUTTON19_SNS_CLK_OFFSET                  (440u)
#define CapSense_1_BUTTON19_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON19_SNS_CLK_PARAM_ID                (0x849301B8u)

#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button19.snsClkSource)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_OFFSET           (442u)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_PARAM_ID         (0x409301BAu)

#define CapSense_1_BUTTON19_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button19.fingerCap)
#define CapSense_1_BUTTON19_FINGER_CAP_OFFSET               (444u)
#define CapSense_1_BUTTON19_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON19_FINGER_CAP_PARAM_ID             (0xA31301BCu)

#define CapSense_1_BUTTON19_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button19.sigPFC)
#define CapSense_1_BUTTON19_SIGPFC_OFFSET                   (446u)
#define CapSense_1_BUTTON19_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON19_SIGPFC_PARAM_ID                 (0xAF1301BEu)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (448u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x820001C0u)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (450u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x8E0001C2u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (452u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x4B0001C4u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (454u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x8F0001C6u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (456u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x480001C8u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (457u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x4E0001C9u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (458u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x8C0001CAu)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (460u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x810001CCu)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (462u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x450001CEu)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (464u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x870001D0u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (466u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x430001D2u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (467u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x450001D3u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (468u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x860001D4u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (470u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x8A0001D6u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (472u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x4D0001D8u)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (474u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x890001DAu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (476u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0001DCu)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (477u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0001DDu)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (478u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x880001DEu)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (480u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x880001E0u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (482u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x4C0001E2u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (484u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x890001E4u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (486u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D0001E6u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (487u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x4B0001E7u)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (488u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x8A0001E8u)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (490u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x860001EAu)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (492u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x430001ECu)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (494u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x870001EEu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (496u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x450001F0u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (497u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x430001F1u)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (498u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x810001F2u)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (500u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x8C0001F4u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (502u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x480001F6u)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (504u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x8F0001F8u)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (506u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B0001FAu)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (507u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x4D0001FBu)

#define CapSense_1_BUTTON6_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_1_BUTTON6_SNS0_RAW0_OFFSET                 (508u)
#define CapSense_1_BUTTON6_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW0_PARAM_ID               (0x8E0001FCu)

#define CapSense_1_BUTTON6_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN0_OFFSET                (510u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_PARAM_ID              (0x820001FEu)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_OFFSET            (512u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID          (0x40000200u)

#define CapSense_1_BUTTON6_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].diff)
#define CapSense_1_BUTTON6_SNS0_DIFF_OFFSET                 (514u)
#define CapSense_1_BUTTON6_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_DIFF_PARAM_ID               (0x84000202u)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (516u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x41000204u)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_OFFSET           (517u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID         (0x47000205u)

#define CapSense_1_BUTTON7_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_1_BUTTON7_SNS0_RAW0_OFFSET                 (518u)
#define CapSense_1_BUTTON7_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW0_PARAM_ID               (0x85000206u)

#define CapSense_1_BUTTON7_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN0_OFFSET                (520u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_PARAM_ID              (0x8A000208u)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_OFFSET            (522u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID          (0x4E00020Au)

#define CapSense_1_BUTTON7_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].diff)
#define CapSense_1_BUTTON7_SNS0_DIFF_OFFSET                 (524u)
#define CapSense_1_BUTTON7_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_DIFF_PARAM_ID               (0x8B00020Cu)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (526u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4F00020Eu)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_OFFSET           (527u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID         (0x4900020Fu)

#define CapSense_1_BUTTON8_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].raw[0u])
#define CapSense_1_BUTTON8_SNS0_RAW0_OFFSET                 (528u)
#define CapSense_1_BUTTON8_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_RAW0_PARAM_ID               (0x8D000210u)

#define CapSense_1_BUTTON8_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button8[0u].bsln[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN0_OFFSET                (530u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_PARAM_ID              (0x81000212u)

#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button8[0u].bslnExt[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_OFFSET            (532u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_PARAM_ID          (0x44000214u)

#define CapSense_1_BUTTON8_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].diff)
#define CapSense_1_BUTTON8_SNS0_DIFF_OFFSET                 (534u)
#define CapSense_1_BUTTON8_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_DIFF_PARAM_ID               (0x80000216u)

#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button8[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (536u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x47000218u)

#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button8[0u].idacComp[0u])
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_OFFSET           (537u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_PARAM_ID         (0x41000219u)

#define CapSense_1_BUTTON9_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].raw[0u])
#define CapSense_1_BUTTON9_SNS0_RAW0_OFFSET                 (538u)
#define CapSense_1_BUTTON9_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_RAW0_PARAM_ID               (0x8300021Au)

#define CapSense_1_BUTTON9_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button9[0u].bsln[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN0_OFFSET                (540u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_PARAM_ID              (0x8E00021Cu)

#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button9[0u].bslnExt[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_OFFSET            (542u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_PARAM_ID          (0x4A00021Eu)

#define CapSense_1_BUTTON9_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].diff)
#define CapSense_1_BUTTON9_SNS0_DIFF_OFFSET                 (544u)
#define CapSense_1_BUTTON9_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_DIFF_PARAM_ID               (0x82000220u)

#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button9[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (546u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x46000222u)

#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button9[0u].idacComp[0u])
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_OFFSET           (547u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_PARAM_ID         (0x40000223u)

#define CapSense_1_BUTTON10_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].raw[0u])
#define CapSense_1_BUTTON10_SNS0_RAW0_OFFSET                (548u)
#define CapSense_1_BUTTON10_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_RAW0_PARAM_ID              (0x83000224u)

#define CapSense_1_BUTTON10_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button10[0u].bsln[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN0_OFFSET               (550u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_PARAM_ID             (0x8F000226u)

#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button10[0u].bslnExt[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_OFFSET           (552u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_PARAM_ID         (0x48000228u)

#define CapSense_1_BUTTON10_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].diff)
#define CapSense_1_BUTTON10_SNS0_DIFF_OFFSET                (554u)
#define CapSense_1_BUTTON10_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_DIFF_PARAM_ID              (0x8C00022Au)

#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button10[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (556u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4900022Cu)

#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button10[0u].idacComp[0u])
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_OFFSET          (557u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_PARAM_ID        (0x4F00022Du)

#define CapSense_1_BUTTON11_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].raw[0u])
#define CapSense_1_BUTTON11_SNS0_RAW0_OFFSET                (558u)
#define CapSense_1_BUTTON11_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_RAW0_PARAM_ID              (0x8D00022Eu)

#define CapSense_1_BUTTON11_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button11[0u].bsln[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN0_OFFSET               (560u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_PARAM_ID             (0x87000230u)

#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button11[0u].bslnExt[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_OFFSET           (562u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_PARAM_ID         (0x43000232u)

#define CapSense_1_BUTTON11_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].diff)
#define CapSense_1_BUTTON11_SNS0_DIFF_OFFSET                (564u)
#define CapSense_1_BUTTON11_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_DIFF_PARAM_ID              (0x86000234u)

#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button11[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (566u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000236u)

#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button11[0u].idacComp[0u])
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_OFFSET          (567u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_PARAM_ID        (0x44000237u)

#define CapSense_1_BUTTON12_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button12[0u].raw[0u])
#define CapSense_1_BUTTON12_SNS0_RAW0_OFFSET                (568u)
#define CapSense_1_BUTTON12_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON12_SNS0_RAW0_PARAM_ID              (0x85000238u)

#define CapSense_1_BUTTON12_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button12[0u].bsln[0u])
#define CapSense_1_BUTTON12_SNS0_BSLN0_OFFSET               (570u)
#define CapSense_1_BUTTON12_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON12_SNS0_BSLN0_PARAM_ID             (0x8900023Au)

#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button12[0u].bslnExt[0u])
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_OFFSET           (572u)
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_PARAM_ID         (0x4C00023Cu)

#define CapSense_1_BUTTON12_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button12[0u].diff)
#define CapSense_1_BUTTON12_SNS0_DIFF_OFFSET                (574u)
#define CapSense_1_BUTTON12_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON12_SNS0_DIFF_PARAM_ID              (0x8800023Eu)

#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button12[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (576u)
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000240u)

#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button12[0u].idacComp[0u])
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_OFFSET          (577u)
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_PARAM_ID        (0x4B000241u)

#define CapSense_1_BUTTON13_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button13[0u].raw[0u])
#define CapSense_1_BUTTON13_SNS0_RAW0_OFFSET                (578u)
#define CapSense_1_BUTTON13_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON13_SNS0_RAW0_PARAM_ID              (0x89000242u)

#define CapSense_1_BUTTON13_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button13[0u].bsln[0u])
#define CapSense_1_BUTTON13_SNS0_BSLN0_OFFSET               (580u)
#define CapSense_1_BUTTON13_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON13_SNS0_BSLN0_PARAM_ID             (0x84000244u)

#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button13[0u].bslnExt[0u])
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_OFFSET           (582u)
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_PARAM_ID         (0x40000246u)

#define CapSense_1_BUTTON13_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button13[0u].diff)
#define CapSense_1_BUTTON13_SNS0_DIFF_OFFSET                (584u)
#define CapSense_1_BUTTON13_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON13_SNS0_DIFF_PARAM_ID              (0x87000248u)

#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button13[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (586u)
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300024Au)

#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button13[0u].idacComp[0u])
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_OFFSET          (587u)
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_PARAM_ID        (0x4500024Bu)

#define CapSense_1_BUTTON14_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button14[0u].raw[0u])
#define CapSense_1_BUTTON14_SNS0_RAW0_OFFSET                (588u)
#define CapSense_1_BUTTON14_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON14_SNS0_RAW0_PARAM_ID              (0x8600024Cu)

#define CapSense_1_BUTTON14_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button14[0u].bsln[0u])
#define CapSense_1_BUTTON14_SNS0_BSLN0_OFFSET               (590u)
#define CapSense_1_BUTTON14_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON14_SNS0_BSLN0_PARAM_ID             (0x8A00024Eu)

#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button14[0u].bslnExt[0u])
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_OFFSET           (592u)
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_PARAM_ID         (0x48000250u)

#define CapSense_1_BUTTON14_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button14[0u].diff)
#define CapSense_1_BUTTON14_SNS0_DIFF_OFFSET                (594u)
#define CapSense_1_BUTTON14_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON14_SNS0_DIFF_PARAM_ID              (0x8C000252u)

#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button14[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (596u)
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000254u)

#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button14[0u].idacComp[0u])
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_OFFSET          (597u)
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_PARAM_ID        (0x4F000255u)

#define CapSense_1_BUTTON15_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button15[0u].raw[0u])
#define CapSense_1_BUTTON15_SNS0_RAW0_OFFSET                (598u)
#define CapSense_1_BUTTON15_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON15_SNS0_RAW0_PARAM_ID              (0x8D000256u)

#define CapSense_1_BUTTON15_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button15[0u].bsln[0u])
#define CapSense_1_BUTTON15_SNS0_BSLN0_OFFSET               (600u)
#define CapSense_1_BUTTON15_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON15_SNS0_BSLN0_PARAM_ID             (0x82000258u)

#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button15[0u].bslnExt[0u])
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_OFFSET           (602u)
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_PARAM_ID         (0x4600025Au)

#define CapSense_1_BUTTON15_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button15[0u].diff)
#define CapSense_1_BUTTON15_SNS0_DIFF_OFFSET                (604u)
#define CapSense_1_BUTTON15_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON15_SNS0_DIFF_PARAM_ID              (0x8300025Cu)

#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button15[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (606u)
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700025Eu)

#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button15[0u].idacComp[0u])
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_OFFSET          (607u)
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_PARAM_ID        (0x4100025Fu)

#define CapSense_1_BUTTON16_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button16[0u].raw[0u])
#define CapSense_1_BUTTON16_SNS0_RAW0_OFFSET                (608u)
#define CapSense_1_BUTTON16_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON16_SNS0_RAW0_PARAM_ID              (0x8F000260u)

#define CapSense_1_BUTTON16_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button16[0u].bsln[0u])
#define CapSense_1_BUTTON16_SNS0_BSLN0_OFFSET               (610u)
#define CapSense_1_BUTTON16_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON16_SNS0_BSLN0_PARAM_ID             (0x83000262u)

#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button16[0u].bslnExt[0u])
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_OFFSET           (612u)
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_PARAM_ID         (0x46000264u)

#define CapSense_1_BUTTON16_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button16[0u].diff)
#define CapSense_1_BUTTON16_SNS0_DIFF_OFFSET                (614u)
#define CapSense_1_BUTTON16_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON16_SNS0_DIFF_PARAM_ID              (0x82000266u)

#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button16[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (616u)
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000268u)

#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button16[0u].idacComp[0u])
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_OFFSET          (617u)
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_PARAM_ID        (0x43000269u)

#define CapSense_1_BUTTON17_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button17[0u].raw[0u])
#define CapSense_1_BUTTON17_SNS0_RAW0_OFFSET                (618u)
#define CapSense_1_BUTTON17_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON17_SNS0_RAW0_PARAM_ID              (0x8100026Au)

#define CapSense_1_BUTTON17_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button17[0u].bsln[0u])
#define CapSense_1_BUTTON17_SNS0_BSLN0_OFFSET               (620u)
#define CapSense_1_BUTTON17_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON17_SNS0_BSLN0_PARAM_ID             (0x8C00026Cu)

#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button17[0u].bslnExt[0u])
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_OFFSET           (622u)
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_PARAM_ID         (0x4800026Eu)

#define CapSense_1_BUTTON17_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button17[0u].diff)
#define CapSense_1_BUTTON17_SNS0_DIFF_OFFSET                (624u)
#define CapSense_1_BUTTON17_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON17_SNS0_DIFF_PARAM_ID              (0x8A000270u)

#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button17[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (626u)
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000272u)

#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button17[0u].idacComp[0u])
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_OFFSET          (627u)
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_PARAM_ID        (0x48000273u)

#define CapSense_1_BUTTON18_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button18[0u].raw[0u])
#define CapSense_1_BUTTON18_SNS0_RAW0_OFFSET                (628u)
#define CapSense_1_BUTTON18_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON18_SNS0_RAW0_PARAM_ID              (0x8B000274u)

#define CapSense_1_BUTTON18_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button18[0u].bsln[0u])
#define CapSense_1_BUTTON18_SNS0_BSLN0_OFFSET               (630u)
#define CapSense_1_BUTTON18_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON18_SNS0_BSLN0_PARAM_ID             (0x87000276u)

#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button18[0u].bslnExt[0u])
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_OFFSET           (632u)
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_PARAM_ID         (0x40000278u)

#define CapSense_1_BUTTON18_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button18[0u].diff)
#define CapSense_1_BUTTON18_SNS0_DIFF_OFFSET                (634u)
#define CapSense_1_BUTTON18_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON18_SNS0_DIFF_PARAM_ID              (0x8400027Au)

#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button18[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (636u)
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4100027Cu)

#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button18[0u].idacComp[0u])
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_OFFSET          (637u)
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_PARAM_ID        (0x4700027Du)

#define CapSense_1_BUTTON19_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button19[0u].raw[0u])
#define CapSense_1_BUTTON19_SNS0_RAW0_OFFSET                (638u)
#define CapSense_1_BUTTON19_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON19_SNS0_RAW0_PARAM_ID              (0x8500027Eu)

#define CapSense_1_BUTTON19_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button19[0u].bsln[0u])
#define CapSense_1_BUTTON19_SNS0_BSLN0_OFFSET               (640u)
#define CapSense_1_BUTTON19_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON19_SNS0_BSLN0_PARAM_ID             (0x8B000280u)

#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button19[0u].bslnExt[0u])
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_OFFSET           (642u)
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_PARAM_ID         (0x4F000282u)

#define CapSense_1_BUTTON19_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button19[0u].diff)
#define CapSense_1_BUTTON19_SNS0_DIFF_OFFSET                (644u)
#define CapSense_1_BUTTON19_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON19_SNS0_DIFF_PARAM_ID              (0x8A000284u)

#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button19[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (646u)
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000286u)

#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button19[0u].idacComp[0u])
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_OFFSET          (647u)
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_PARAM_ID        (0x48000287u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (648u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6A000288u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (649u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6C000289u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (650u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x8500028Au)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (652u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8800028Cu)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (654u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x4C00028Eu)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (655u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x4A00028Fu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_OFFSET           (28u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID         (0xD700001Cu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (32u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xD8010020u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (36u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xD9010024u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (40u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDA010028u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (44u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDB01002Cu)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (48u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDD010030u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (52u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDC010034u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (56u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x90010038u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (58u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5401003Au)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (59u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5201003Bu)

#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_OFFSET           (60u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_PARAM_ID         (0xDE01003Cu)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (64u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xDA020040u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (68u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDB020044u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (72u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xD8020048u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (76u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xD902004Cu)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (80u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDF020050u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (84u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xDE020054u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (88u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x92020058u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (90u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x5602005Au)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (91u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x5002005Bu)

#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_OFFSET           (92u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_PARAM_ID         (0xDC02005Cu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (96u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD3030060u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (100u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD2030064u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (104u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD1030068u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (108u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD003006Cu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (112u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD6030070u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (116u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD7030074u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (120u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9B030078u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (122u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5F03007Au)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (123u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x5903007Bu)

#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_OFFSET           (124u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_PARAM_ID         (0xD503007Cu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (128u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xDE040080u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (132u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xDF040084u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (136u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xDC040088u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (140u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xDD04008Cu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (144u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xDB040090u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (148u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xDA040094u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (152u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x96040098u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (154u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5204009Au)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (155u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5404009Bu)

#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_OFFSET           (156u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_PARAM_ID         (0xD804009Cu)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (160u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xD70500A0u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (164u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xD60500A4u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (168u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xD50500A8u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (172u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xD40500ACu)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (176u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xD20500B0u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (180u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xD30500B4u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (184u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x9F0500B8u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (186u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5B0500BAu)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (187u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5D0500BBu)

#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[5].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_OFFSET           (188u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_PARAM_ID         (0xD10500BCu)

#define CapSense_1_BUTTON6_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_OFFSET             (192u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_PARAM_ID           (0xD50600C0u)

#define CapSense_1_BUTTON6_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON6_PTR2WD_RAM_OFFSET                (196u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_PARAM_ID              (0xD40600C4u)

#define CapSense_1_BUTTON6_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_OFFSET               (200u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_PARAM_ID             (0xD70600C8u)

#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_OFFSET          (204u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID        (0xD60600CCu)

#define CapSense_1_BUTTON6_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_OFFSET              (208u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_PARAM_ID            (0xD00600D0u)

#define CapSense_1_BUTTON6_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON6_STATIC_CONFIG_OFFSET             (212u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_PARAM_ID           (0xD10600D4u)

#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_OFFSET             (216u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_PARAM_ID           (0x9D0600D8u)

#define CapSense_1_BUTTON6_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON6_TYPE_OFFSET                      (218u)
#define CapSense_1_BUTTON6_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON6_TYPE_PARAM_ID                    (0x590600DAu)

#define CapSense_1_BUTTON6_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON6_NUM_COLS_OFFSET                  (219u)
#define CapSense_1_BUTTON6_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON6_NUM_COLS_PARAM_ID                (0x5F0600DBu)

#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[6].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_OFFSET           (220u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_PARAM_ID         (0xD30600DCu)

#define CapSense_1_BUTTON7_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_OFFSET             (224u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_PARAM_ID           (0xDC0700E0u)

#define CapSense_1_BUTTON7_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_1_BUTTON7_PTR2WD_RAM_OFFSET                (228u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_PARAM_ID              (0xDD0700E4u)

#define CapSense_1_BUTTON7_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_OFFSET               (232u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_PARAM_ID             (0xDE0700E8u)

#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_OFFSET          (236u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID        (0xDF0700ECu)

#define CapSense_1_BUTTON7_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_OFFSET              (240u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_PARAM_ID            (0xD90700F0u)

#define CapSense_1_BUTTON7_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_1_BUTTON7_STATIC_CONFIG_OFFSET             (244u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_PARAM_ID           (0xD80700F4u)

#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_OFFSET             (248u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_PARAM_ID           (0x940700F8u)

#define CapSense_1_BUTTON7_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_1_BUTTON7_TYPE_OFFSET                      (250u)
#define CapSense_1_BUTTON7_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON7_TYPE_PARAM_ID                    (0x500700FAu)

#define CapSense_1_BUTTON7_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[7].numCols)
#define CapSense_1_BUTTON7_NUM_COLS_OFFSET                  (251u)
#define CapSense_1_BUTTON7_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON7_NUM_COLS_PARAM_ID                (0x560700FBu)

#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[7].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_OFFSET           (252u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_PARAM_ID         (0xDA0700FCu)

#define CapSense_1_BUTTON8_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsFlash)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_OFFSET             (256u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_PARAM_ID           (0xDB080100u)

#define CapSense_1_BUTTON8_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[8].ptr2WdgtRam)
#define CapSense_1_BUTTON8_PTR2WD_RAM_OFFSET                (260u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_PARAM_ID              (0xDA080104u)

#define CapSense_1_BUTTON8_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsRam)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_OFFSET               (264u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_PARAM_ID             (0xD9080108u)

#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[8].ptr2FltrHistory)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_OFFSET          (268u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_PARAM_ID        (0xD808010Cu)

#define CapSense_1_BUTTON8_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[8].ptr2DebounceArr)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_OFFSET              (272u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_PARAM_ID            (0xDE080110u)

#define CapSense_1_BUTTON8_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[8].staticConfig)
#define CapSense_1_BUTTON8_STATIC_CONFIG_OFFSET             (276u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_PARAM_ID           (0xDF080114u)

#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[8].totalNumSns)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_OFFSET             (280u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_PARAM_ID           (0x93080118u)

#define CapSense_1_BUTTON8_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[8].wdgtType)
#define CapSense_1_BUTTON8_TYPE_OFFSET                      (282u)
#define CapSense_1_BUTTON8_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON8_TYPE_PARAM_ID                    (0x5708011Au)

#define CapSense_1_BUTTON8_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[8].numCols)
#define CapSense_1_BUTTON8_NUM_COLS_OFFSET                  (283u)
#define CapSense_1_BUTTON8_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON8_NUM_COLS_PARAM_ID                (0x5108011Bu)

#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[8].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_OFFSET           (284u)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_PARAM_ID         (0xDD08011Cu)

#define CapSense_1_BUTTON9_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsFlash)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_OFFSET             (288u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_PARAM_ID           (0xD2090120u)

#define CapSense_1_BUTTON9_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[9].ptr2WdgtRam)
#define CapSense_1_BUTTON9_PTR2WD_RAM_OFFSET                (292u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_PARAM_ID              (0xD3090124u)

#define CapSense_1_BUTTON9_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsRam)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_OFFSET               (296u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_PARAM_ID             (0xD0090128u)

#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[9].ptr2FltrHistory)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_OFFSET          (300u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_PARAM_ID        (0xD109012Cu)

#define CapSense_1_BUTTON9_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[9].ptr2DebounceArr)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_OFFSET              (304u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_PARAM_ID            (0xD7090130u)

#define CapSense_1_BUTTON9_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[9].staticConfig)
#define CapSense_1_BUTTON9_STATIC_CONFIG_OFFSET             (308u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_PARAM_ID           (0xD6090134u)

#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[9].totalNumSns)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_OFFSET             (312u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_PARAM_ID           (0x9A090138u)

#define CapSense_1_BUTTON9_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[9].wdgtType)
#define CapSense_1_BUTTON9_TYPE_OFFSET                      (314u)
#define CapSense_1_BUTTON9_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON9_TYPE_PARAM_ID                    (0x5E09013Au)

#define CapSense_1_BUTTON9_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[9].numCols)
#define CapSense_1_BUTTON9_NUM_COLS_OFFSET                  (315u)
#define CapSense_1_BUTTON9_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON9_NUM_COLS_PARAM_ID                (0x5809013Bu)

#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[9].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_OFFSET           (316u)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_PARAM_ID         (0xD409013Cu)

#define CapSense_1_BUTTON10_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsFlash)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_OFFSET            (320u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_PARAM_ID          (0xD00A0140u)

#define CapSense_1_BUTTON10_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[10].ptr2WdgtRam)
#define CapSense_1_BUTTON10_PTR2WD_RAM_OFFSET               (324u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_PARAM_ID             (0xD10A0144u)

#define CapSense_1_BUTTON10_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsRam)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_OFFSET              (328u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_PARAM_ID            (0xD20A0148u)

#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[10].ptr2FltrHistory)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_OFFSET         (332u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_PARAM_ID       (0xD30A014Cu)

#define CapSense_1_BUTTON10_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[10].ptr2DebounceArr)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_OFFSET             (336u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_PARAM_ID           (0xD50A0150u)

#define CapSense_1_BUTTON10_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[10].staticConfig)
#define CapSense_1_BUTTON10_STATIC_CONFIG_OFFSET            (340u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_PARAM_ID          (0xD40A0154u)

#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[10].totalNumSns)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_OFFSET            (344u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_PARAM_ID          (0x980A0158u)

#define CapSense_1_BUTTON10_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[10].wdgtType)
#define CapSense_1_BUTTON10_TYPE_OFFSET                     (346u)
#define CapSense_1_BUTTON10_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON10_TYPE_PARAM_ID                   (0x5C0A015Au)

#define CapSense_1_BUTTON10_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[10].numCols)
#define CapSense_1_BUTTON10_NUM_COLS_OFFSET                 (347u)
#define CapSense_1_BUTTON10_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON10_NUM_COLS_PARAM_ID               (0x5A0A015Bu)

#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[10].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_OFFSET          (348u)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_PARAM_ID        (0xD60A015Cu)

#define CapSense_1_BUTTON11_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsFlash)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_OFFSET            (352u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_PARAM_ID          (0xD90B0160u)

#define CapSense_1_BUTTON11_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[11].ptr2WdgtRam)
#define CapSense_1_BUTTON11_PTR2WD_RAM_OFFSET               (356u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_PARAM_ID             (0xD80B0164u)

#define CapSense_1_BUTTON11_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsRam)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_OFFSET              (360u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_PARAM_ID            (0xDB0B0168u)

#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[11].ptr2FltrHistory)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_OFFSET         (364u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_PARAM_ID       (0xDA0B016Cu)

#define CapSense_1_BUTTON11_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[11].ptr2DebounceArr)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_OFFSET             (368u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_PARAM_ID           (0xDC0B0170u)

#define CapSense_1_BUTTON11_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[11].staticConfig)
#define CapSense_1_BUTTON11_STATIC_CONFIG_OFFSET            (372u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_PARAM_ID          (0xDD0B0174u)

#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[11].totalNumSns)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_OFFSET            (376u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_PARAM_ID          (0x910B0178u)

#define CapSense_1_BUTTON11_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[11].wdgtType)
#define CapSense_1_BUTTON11_TYPE_OFFSET                     (378u)
#define CapSense_1_BUTTON11_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON11_TYPE_PARAM_ID                   (0x550B017Au)

#define CapSense_1_BUTTON11_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[11].numCols)
#define CapSense_1_BUTTON11_NUM_COLS_OFFSET                 (379u)
#define CapSense_1_BUTTON11_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON11_NUM_COLS_PARAM_ID               (0x530B017Bu)

#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[11].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_OFFSET          (380u)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_PARAM_ID        (0xDF0B017Cu)

#define CapSense_1_BUTTON12_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[12].ptr2SnsFlash)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_OFFSET            (384u)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_PARAM_ID          (0xD40C0180u)

#define CapSense_1_BUTTON12_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[12].ptr2WdgtRam)
#define CapSense_1_BUTTON12_PTR2WD_RAM_OFFSET               (388u)
#define CapSense_1_BUTTON12_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON12_PTR2WD_RAM_PARAM_ID             (0xD50C0184u)

#define CapSense_1_BUTTON12_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[12].ptr2SnsRam)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_OFFSET              (392u)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_PARAM_ID            (0xD60C0188u)

#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[12].ptr2FltrHistory)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_OFFSET         (396u)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_PARAM_ID       (0xD70C018Cu)

#define CapSense_1_BUTTON12_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[12].ptr2DebounceArr)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_OFFSET             (400u)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_PARAM_ID           (0xD10C0190u)

#define CapSense_1_BUTTON12_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[12].staticConfig)
#define CapSense_1_BUTTON12_STATIC_CONFIG_OFFSET            (404u)
#define CapSense_1_BUTTON12_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON12_STATIC_CONFIG_PARAM_ID          (0xD00C0194u)

#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[12].totalNumSns)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_OFFSET            (408u)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_PARAM_ID          (0x9C0C0198u)

#define CapSense_1_BUTTON12_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[12].wdgtType)
#define CapSense_1_BUTTON12_TYPE_OFFSET                     (410u)
#define CapSense_1_BUTTON12_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON12_TYPE_PARAM_ID                   (0x580C019Au)

#define CapSense_1_BUTTON12_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[12].numCols)
#define CapSense_1_BUTTON12_NUM_COLS_OFFSET                 (411u)
#define CapSense_1_BUTTON12_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON12_NUM_COLS_PARAM_ID               (0x5E0C019Bu)

#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[12].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_OFFSET          (412u)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_PARAM_ID        (0xD20C019Cu)

#define CapSense_1_BUTTON13_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[13].ptr2SnsFlash)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_OFFSET            (416u)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_PARAM_ID          (0xDD0D01A0u)

#define CapSense_1_BUTTON13_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[13].ptr2WdgtRam)
#define CapSense_1_BUTTON13_PTR2WD_RAM_OFFSET               (420u)
#define CapSense_1_BUTTON13_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON13_PTR2WD_RAM_PARAM_ID             (0xDC0D01A4u)

#define CapSense_1_BUTTON13_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[13].ptr2SnsRam)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_OFFSET              (424u)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_PARAM_ID            (0xDF0D01A8u)

#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[13].ptr2FltrHistory)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_OFFSET         (428u)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_PARAM_ID       (0xDE0D01ACu)

#define CapSense_1_BUTTON13_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[13].ptr2DebounceArr)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_OFFSET             (432u)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_PARAM_ID           (0xD80D01B0u)

#define CapSense_1_BUTTON13_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[13].staticConfig)
#define CapSense_1_BUTTON13_STATIC_CONFIG_OFFSET            (436u)
#define CapSense_1_BUTTON13_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON13_STATIC_CONFIG_PARAM_ID          (0xD90D01B4u)

#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[13].totalNumSns)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_OFFSET            (440u)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_PARAM_ID          (0x950D01B8u)

#define CapSense_1_BUTTON13_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[13].wdgtType)
#define CapSense_1_BUTTON13_TYPE_OFFSET                     (442u)
#define CapSense_1_BUTTON13_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON13_TYPE_PARAM_ID                   (0x510D01BAu)

#define CapSense_1_BUTTON13_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[13].numCols)
#define CapSense_1_BUTTON13_NUM_COLS_OFFSET                 (443u)
#define CapSense_1_BUTTON13_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON13_NUM_COLS_PARAM_ID               (0x570D01BBu)

#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[13].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_OFFSET          (444u)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_PARAM_ID        (0xDB0D01BCu)

#define CapSense_1_BUTTON14_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[14].ptr2SnsFlash)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_OFFSET            (448u)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_PARAM_ID          (0xDF0E01C0u)

#define CapSense_1_BUTTON14_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[14].ptr2WdgtRam)
#define CapSense_1_BUTTON14_PTR2WD_RAM_OFFSET               (452u)
#define CapSense_1_BUTTON14_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON14_PTR2WD_RAM_PARAM_ID             (0xDE0E01C4u)

#define CapSense_1_BUTTON14_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[14].ptr2SnsRam)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_OFFSET              (456u)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_PARAM_ID            (0xDD0E01C8u)

#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[14].ptr2FltrHistory)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_OFFSET         (460u)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_PARAM_ID       (0xDC0E01CCu)

#define CapSense_1_BUTTON14_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[14].ptr2DebounceArr)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_OFFSET             (464u)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_PARAM_ID           (0xDA0E01D0u)

#define CapSense_1_BUTTON14_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[14].staticConfig)
#define CapSense_1_BUTTON14_STATIC_CONFIG_OFFSET            (468u)
#define CapSense_1_BUTTON14_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON14_STATIC_CONFIG_PARAM_ID          (0xDB0E01D4u)

#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[14].totalNumSns)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_OFFSET            (472u)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_PARAM_ID          (0x970E01D8u)

#define CapSense_1_BUTTON14_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[14].wdgtType)
#define CapSense_1_BUTTON14_TYPE_OFFSET                     (474u)
#define CapSense_1_BUTTON14_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON14_TYPE_PARAM_ID                   (0x530E01DAu)

#define CapSense_1_BUTTON14_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[14].numCols)
#define CapSense_1_BUTTON14_NUM_COLS_OFFSET                 (475u)
#define CapSense_1_BUTTON14_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON14_NUM_COLS_PARAM_ID               (0x550E01DBu)

#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[14].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_OFFSET          (476u)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_PARAM_ID        (0xD90E01DCu)

#define CapSense_1_BUTTON15_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[15].ptr2SnsFlash)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_OFFSET            (480u)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_PARAM_ID          (0xD60F01E0u)

#define CapSense_1_BUTTON15_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[15].ptr2WdgtRam)
#define CapSense_1_BUTTON15_PTR2WD_RAM_OFFSET               (484u)
#define CapSense_1_BUTTON15_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON15_PTR2WD_RAM_PARAM_ID             (0xD70F01E4u)

#define CapSense_1_BUTTON15_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[15].ptr2SnsRam)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_OFFSET              (488u)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_PARAM_ID            (0xD40F01E8u)

#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[15].ptr2FltrHistory)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_OFFSET         (492u)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_PARAM_ID       (0xD50F01ECu)

#define CapSense_1_BUTTON15_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[15].ptr2DebounceArr)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_OFFSET             (496u)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_PARAM_ID           (0xD30F01F0u)

#define CapSense_1_BUTTON15_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[15].staticConfig)
#define CapSense_1_BUTTON15_STATIC_CONFIG_OFFSET            (500u)
#define CapSense_1_BUTTON15_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON15_STATIC_CONFIG_PARAM_ID          (0xD20F01F4u)

#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[15].totalNumSns)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_OFFSET            (504u)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_PARAM_ID          (0x9E0F01F8u)

#define CapSense_1_BUTTON15_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[15].wdgtType)
#define CapSense_1_BUTTON15_TYPE_OFFSET                     (506u)
#define CapSense_1_BUTTON15_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON15_TYPE_PARAM_ID                   (0x5A0F01FAu)

#define CapSense_1_BUTTON15_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[15].numCols)
#define CapSense_1_BUTTON15_NUM_COLS_OFFSET                 (507u)
#define CapSense_1_BUTTON15_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON15_NUM_COLS_PARAM_ID               (0x5C0F01FBu)

#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[15].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_OFFSET          (508u)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_PARAM_ID        (0xD00F01FCu)

#define CapSense_1_BUTTON16_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[16].ptr2SnsFlash)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_OFFSET            (512u)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_PARAM_ID          (0xD0100200u)

#define CapSense_1_BUTTON16_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[16].ptr2WdgtRam)
#define CapSense_1_BUTTON16_PTR2WD_RAM_OFFSET               (516u)
#define CapSense_1_BUTTON16_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON16_PTR2WD_RAM_PARAM_ID             (0xD1100204u)

#define CapSense_1_BUTTON16_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[16].ptr2SnsRam)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_OFFSET              (520u)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_PARAM_ID            (0xD2100208u)

#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[16].ptr2FltrHistory)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_OFFSET         (524u)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_PARAM_ID       (0xD310020Cu)

#define CapSense_1_BUTTON16_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[16].ptr2DebounceArr)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_OFFSET             (528u)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_PARAM_ID           (0xD5100210u)

#define CapSense_1_BUTTON16_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[16].staticConfig)
#define CapSense_1_BUTTON16_STATIC_CONFIG_OFFSET            (532u)
#define CapSense_1_BUTTON16_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON16_STATIC_CONFIG_PARAM_ID          (0xD4100214u)

#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[16].totalNumSns)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_OFFSET            (536u)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_PARAM_ID          (0x98100218u)

#define CapSense_1_BUTTON16_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[16].wdgtType)
#define CapSense_1_BUTTON16_TYPE_OFFSET                     (538u)
#define CapSense_1_BUTTON16_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON16_TYPE_PARAM_ID                   (0x5C10021Au)

#define CapSense_1_BUTTON16_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[16].numCols)
#define CapSense_1_BUTTON16_NUM_COLS_OFFSET                 (539u)
#define CapSense_1_BUTTON16_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON16_NUM_COLS_PARAM_ID               (0x5A10021Bu)

#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[16].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_OFFSET          (540u)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_PARAM_ID        (0xD610021Cu)

#define CapSense_1_BUTTON17_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[17].ptr2SnsFlash)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_OFFSET            (544u)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_PARAM_ID          (0xD9110220u)

#define CapSense_1_BUTTON17_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[17].ptr2WdgtRam)
#define CapSense_1_BUTTON17_PTR2WD_RAM_OFFSET               (548u)
#define CapSense_1_BUTTON17_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON17_PTR2WD_RAM_PARAM_ID             (0xD8110224u)

#define CapSense_1_BUTTON17_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[17].ptr2SnsRam)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_OFFSET              (552u)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_PARAM_ID            (0xDB110228u)

#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[17].ptr2FltrHistory)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_OFFSET         (556u)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_PARAM_ID       (0xDA11022Cu)

#define CapSense_1_BUTTON17_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[17].ptr2DebounceArr)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_OFFSET             (560u)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_PARAM_ID           (0xDC110230u)

#define CapSense_1_BUTTON17_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[17].staticConfig)
#define CapSense_1_BUTTON17_STATIC_CONFIG_OFFSET            (564u)
#define CapSense_1_BUTTON17_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON17_STATIC_CONFIG_PARAM_ID          (0xDD110234u)

#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[17].totalNumSns)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_OFFSET            (568u)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_PARAM_ID          (0x91110238u)

#define CapSense_1_BUTTON17_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[17].wdgtType)
#define CapSense_1_BUTTON17_TYPE_OFFSET                     (570u)
#define CapSense_1_BUTTON17_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON17_TYPE_PARAM_ID                   (0x5511023Au)

#define CapSense_1_BUTTON17_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[17].numCols)
#define CapSense_1_BUTTON17_NUM_COLS_OFFSET                 (571u)
#define CapSense_1_BUTTON17_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON17_NUM_COLS_PARAM_ID               (0x5311023Bu)

#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[17].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_OFFSET          (572u)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_PARAM_ID        (0xDF11023Cu)

#define CapSense_1_BUTTON18_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[18].ptr2SnsFlash)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_OFFSET            (576u)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_PARAM_ID          (0xDB120240u)

#define CapSense_1_BUTTON18_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[18].ptr2WdgtRam)
#define CapSense_1_BUTTON18_PTR2WD_RAM_OFFSET               (580u)
#define CapSense_1_BUTTON18_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON18_PTR2WD_RAM_PARAM_ID             (0xDA120244u)

#define CapSense_1_BUTTON18_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[18].ptr2SnsRam)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_OFFSET              (584u)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_PARAM_ID            (0xD9120248u)

#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[18].ptr2FltrHistory)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_OFFSET         (588u)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_PARAM_ID       (0xD812024Cu)

#define CapSense_1_BUTTON18_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[18].ptr2DebounceArr)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_OFFSET             (592u)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_PARAM_ID           (0xDE120250u)

#define CapSense_1_BUTTON18_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[18].staticConfig)
#define CapSense_1_BUTTON18_STATIC_CONFIG_OFFSET            (596u)
#define CapSense_1_BUTTON18_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON18_STATIC_CONFIG_PARAM_ID          (0xDF120254u)

#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[18].totalNumSns)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_OFFSET            (600u)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_PARAM_ID          (0x93120258u)

#define CapSense_1_BUTTON18_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[18].wdgtType)
#define CapSense_1_BUTTON18_TYPE_OFFSET                     (602u)
#define CapSense_1_BUTTON18_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON18_TYPE_PARAM_ID                   (0x5712025Au)

#define CapSense_1_BUTTON18_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[18].numCols)
#define CapSense_1_BUTTON18_NUM_COLS_OFFSET                 (603u)
#define CapSense_1_BUTTON18_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON18_NUM_COLS_PARAM_ID               (0x5112025Bu)

#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[18].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_OFFSET          (604u)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_PARAM_ID        (0xDD12025Cu)

#define CapSense_1_BUTTON19_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[19].ptr2SnsFlash)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_OFFSET            (608u)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_PARAM_ID          (0xD2130260u)

#define CapSense_1_BUTTON19_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[19].ptr2WdgtRam)
#define CapSense_1_BUTTON19_PTR2WD_RAM_OFFSET               (612u)
#define CapSense_1_BUTTON19_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON19_PTR2WD_RAM_PARAM_ID             (0xD3130264u)

#define CapSense_1_BUTTON19_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[19].ptr2SnsRam)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_OFFSET              (616u)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_PARAM_ID            (0xD0130268u)

#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[19].ptr2FltrHistory)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_OFFSET         (620u)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_PARAM_ID       (0xD113026Cu)

#define CapSense_1_BUTTON19_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[19].ptr2DebounceArr)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_OFFSET             (624u)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_PARAM_ID           (0xD7130270u)

#define CapSense_1_BUTTON19_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[19].staticConfig)
#define CapSense_1_BUTTON19_STATIC_CONFIG_OFFSET            (628u)
#define CapSense_1_BUTTON19_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON19_STATIC_CONFIG_PARAM_ID          (0xD6130274u)

#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[19].totalNumSns)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_OFFSET            (632u)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_PARAM_ID          (0x9A130278u)

#define CapSense_1_BUTTON19_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[19].wdgtType)
#define CapSense_1_BUTTON19_TYPE_OFFSET                     (634u)
#define CapSense_1_BUTTON19_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON19_TYPE_PARAM_ID                   (0x5E13027Au)

#define CapSense_1_BUTTON19_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[19].numCols)
#define CapSense_1_BUTTON19_NUM_COLS_OFFSET                 (635u)
#define CapSense_1_BUTTON19_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON19_NUM_COLS_PARAM_ID               (0x5813027Bu)

#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[19].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_OFFSET          (636u)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_PARAM_ID        (0xD413027Cu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
