/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.0 Datasheet
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

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_WORKING0_VALUE                        (CapSense_dsRam.wdgtWorking[0u])
#define CapSense_WDGT_WORKING0_OFFSET                       (20u)
#define CapSense_WDGT_WORKING0_SIZE                         (4u)
#define CapSense_WDGT_WORKING0_PARAM_ID                     (0xCC000014u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (24u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCF000018u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (28u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x4900001Cu)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (30u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xAB80001Eu)

#define CapSense_MOD_CSX_CLK_VALUE                          (CapSense_dsRam.modCsxClk)
#define CapSense_MOD_CSX_CLK_OFFSET                         (32u)
#define CapSense_MOD_CSX_CLK_SIZE                           (1u)
#define CapSense_MOD_CSX_CLK_PARAM_ID                       (0x63800020u)

#define CapSense_GLB_CRC_VALUE                              (CapSense_dsRam.glbCrc)
#define CapSense_GLB_CRC_OFFSET                             (34u)
#define CapSense_GLB_CRC_SIZE                               (2u)
#define CapSense_GLB_CRC_PARAM_ID                           (0x81000022u)

#define CapSense_TOUCHPAD0_CRC_VALUE                        (CapSense_dsRam.wdgtList.touchpad0.crc)
#define CapSense_TOUCHPAD0_CRC_OFFSET                       (36u)
#define CapSense_TOUCHPAD0_CRC_SIZE                         (2u)
#define CapSense_TOUCHPAD0_CRC_PARAM_ID                     (0x8C000024u)

#define CapSense_TOUCHPAD0_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_TOUCHPAD0_RESOLUTION_OFFSET                (38u)
#define CapSense_TOUCHPAD0_RESOLUTION_SIZE                  (2u)
#define CapSense_TOUCHPAD0_RESOLUTION_PARAM_ID              (0xA6800026u)

#define CapSense_TOUCHPAD0_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_TOUCHPAD0_FINGER_TH_OFFSET                 (40u)
#define CapSense_TOUCHPAD0_FINGER_TH_SIZE                   (2u)
#define CapSense_TOUCHPAD0_FINGER_TH_PARAM_ID               (0xA9800028u)

#define CapSense_TOUCHPAD0_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_TOUCHPAD0_NOISE_TH_OFFSET                  (42u)
#define CapSense_TOUCHPAD0_NOISE_TH_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NOISE_TH_PARAM_ID                (0x6D80002Au)

#define CapSense_TOUCHPAD0_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_TOUCHPAD0_NNOISE_TH_OFFSET                 (43u)
#define CapSense_TOUCHPAD0_NNOISE_TH_SIZE                   (1u)
#define CapSense_TOUCHPAD0_NNOISE_TH_PARAM_ID               (0x6B80002Bu)

#define CapSense_TOUCHPAD0_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_TOUCHPAD0_HYSTERESIS_OFFSET                (44u)
#define CapSense_TOUCHPAD0_HYSTERESIS_SIZE                  (1u)
#define CapSense_TOUCHPAD0_HYSTERESIS_PARAM_ID              (0x6080002Cu)

#define CapSense_TOUCHPAD0_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_OFFSET               (45u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID             (0x6680002Du)

#define CapSense_TOUCHPAD0_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_OFFSET              (46u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID            (0x6C80002Eu)

#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE            (CapSense_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET           (47u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID         (0x6A80002Fu)

#define CapSense_TOUCHPAD0_SNS_CLK_VALUE                    (CapSense_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_TOUCHPAD0_SNS_CLK_OFFSET                   (48u)
#define CapSense_TOUCHPAD0_SNS_CLK_SIZE                     (2u)
#define CapSense_TOUCHPAD0_SNS_CLK_PARAM_ID                 (0xAE800030u)

#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET            (50u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID          (0x41800032u)

#define CapSense_TOUCHPAD0_VELOCITY_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.velocity)
#define CapSense_TOUCHPAD0_VELOCITY_OFFSET                  (52u)
#define CapSense_TOUCHPAD0_VELOCITY_SIZE                    (4u)
#define CapSense_TOUCHPAD0_VELOCITY_PARAM_ID                (0xED000034u)

#define CapSense_TOUCHPAD0_TOUCH0_X_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].x)
#define CapSense_TOUCHPAD0_TOUCH0_X_OFFSET                  (56u)
#define CapSense_TOUCHPAD0_TOUCH0_X_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_X_PARAM_ID                (0x8A000038u)

#define CapSense_TOUCHPAD0_TOUCH0_Y_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].y)
#define CapSense_TOUCHPAD0_TOUCH0_Y_OFFSET                  (58u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_PARAM_ID                (0x8600003Au)

#define CapSense_TOUCHPAD0_TOUCH0_Z_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].z)
#define CapSense_TOUCHPAD0_TOUCH0_Z_OFFSET                  (60u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_SIZE                    (1u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_PARAM_ID                (0x4300003Cu)

#define CapSense_TOUCHPAD0_TOUCH0_ID_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.touch[0u].id)
#define CapSense_TOUCHPAD0_TOUCH0_ID_OFFSET                 (61u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_SIZE                   (1u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_PARAM_ID               (0x4500003Du)

#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_OFFSET              (64u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_PARAM_ID            (0x8A000040u)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_OFFSET             (66u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_PARAM_ID           (0x86000042u)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[0u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_INV0_OFFSET         (68u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_INV0_PARAM_ID       (0x8B000044u)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_OFFSET         (70u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_PARAM_ID       (0x4F000046u)

#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_OFFSET              (72u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_PARAM_ID            (0x88000048u)

#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_OFFSET (74u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C00004Au)

#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_OFFSET        (75u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_PARAM_ID      (0x4A00004Bu)

#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_OFFSET              (76u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_PARAM_ID            (0x8900004Cu)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_OFFSET             (78u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_PARAM_ID           (0x8500004Eu)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[1u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_INV0_OFFSET         (80u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_INV0_PARAM_ID       (0x8F000050u)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_OFFSET         (82u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_PARAM_ID       (0x4B000052u)

#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_OFFSET              (84u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_PARAM_ID            (0x8E000054u)

#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_OFFSET (86u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A000056u)

#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_OFFSET        (87u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_PARAM_ID      (0x4C000057u)

#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_OFFSET              (88u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_PARAM_ID            (0x8D000058u)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_OFFSET             (90u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_PARAM_ID           (0x8100005Au)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[2u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_INV0_OFFSET         (92u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_INV0_PARAM_ID       (0x8C00005Cu)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_OFFSET         (94u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_PARAM_ID       (0x4800005Eu)

#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_OFFSET              (96u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_PARAM_ID            (0x80000060u)

#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_OFFSET (98u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x44000062u)

#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_OFFSET        (99u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_PARAM_ID      (0x42000063u)

#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_OFFSET              (100u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_PARAM_ID            (0x81000064u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_OFFSET             (102u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_PARAM_ID           (0x8D000066u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[3u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_INV0_OFFSET         (104u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_INV0_PARAM_ID       (0x82000068u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_OFFSET         (106u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_PARAM_ID       (0x4600006Au)

#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_OFFSET              (108u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_PARAM_ID            (0x8300006Cu)

#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_OFFSET (110u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700006Eu)

#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_OFFSET        (111u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_PARAM_ID      (0x4100006Fu)

#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_OFFSET              (112u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_PARAM_ID            (0x85000070u)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_OFFSET             (114u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_PARAM_ID           (0x89000072u)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[4u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_INV0_OFFSET         (116u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_INV0_PARAM_ID       (0x84000074u)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_OFFSET         (118u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_PARAM_ID       (0x40000076u)

#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_OFFSET              (120u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_PARAM_ID            (0x87000078u)

#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_OFFSET (122u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300007Au)

#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_OFFSET        (123u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_PARAM_ID      (0x4500007Bu)

#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_OFFSET              (124u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_PARAM_ID            (0x8600007Cu)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_OFFSET             (126u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_PARAM_ID           (0x8A00007Eu)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[5u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_INV0_OFFSET         (128u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_INV0_PARAM_ID       (0x84000080u)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_OFFSET         (130u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_PARAM_ID       (0x40000082u)

#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_OFFSET              (132u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_PARAM_ID            (0x85000084u)

#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_OFFSET (134u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000086u)

#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_OFFSET        (135u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_PARAM_ID      (0x47000087u)

#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_OFFSET              (136u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_PARAM_ID            (0x86000088u)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_OFFSET             (138u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_PARAM_ID           (0x8A00008Au)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[6u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_INV0_OFFSET         (140u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_INV0_PARAM_ID       (0x8700008Cu)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_OFFSET         (142u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_PARAM_ID       (0x4300008Eu)

#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_OFFSET              (144u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_PARAM_ID            (0x81000090u)

#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_OFFSET (146u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000092u)

#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_OFFSET        (147u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_PARAM_ID      (0x43000093u)

#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_OFFSET              (148u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_PARAM_ID            (0x80000094u)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_OFFSET             (150u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_PARAM_ID           (0x8C000096u)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[7u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_INV0_OFFSET         (152u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_INV0_PARAM_ID       (0x83000098u)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_OFFSET         (154u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_PARAM_ID       (0x4700009Au)

#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_OFFSET              (156u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_PARAM_ID            (0x8200009Cu)

#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_OFFSET (158u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4600009Eu)

#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_OFFSET        (159u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_PARAM_ID      (0x4000009Fu)

#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_OFFSET              (160u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_PARAM_ID            (0x8E0000A0u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_OFFSET             (162u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_PARAM_ID           (0x820000A2u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[8u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_INV0_OFFSET         (164u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_INV0_PARAM_ID       (0x8F0000A4u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_OFFSET         (166u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_PARAM_ID       (0x4B0000A6u)

#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_OFFSET              (168u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_PARAM_ID            (0x8C0000A8u)

#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_OFFSET (170u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x480000AAu)

#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_OFFSET        (171u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_PARAM_ID      (0x4E0000ABu)

#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_OFFSET              (172u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_PARAM_ID            (0x8D0000ACu)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_OFFSET             (174u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_PARAM_ID           (0x810000AEu)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[9u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_INV0_OFFSET         (176u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_INV0_PARAM_ID       (0x8B0000B0u)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_OFFSET         (178u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_PARAM_ID       (0x4F0000B2u)

#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_OFFSET              (180u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_PARAM_ID            (0x8A0000B4u)

#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_OFFSET (182u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0000B6u)

#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_OFFSET        (183u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_PARAM_ID      (0x480000B7u)

#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_OFFSET              (184u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_PARAM_ID            (0x890000B8u)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_OFFSET             (186u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_PARAM_ID           (0x850000BAu)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[10u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_INV0_OFFSET         (188u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_INV0_PARAM_ID       (0x880000BCu)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_OFFSET         (190u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_PARAM_ID       (0x4C0000BEu)

#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_OFFSET              (192u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_PARAM_ID            (0x890000C0u)

#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_OFFSET (194u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D0000C2u)

#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_OFFSET        (195u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_PARAM_ID      (0x4B0000C3u)

#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_OFFSET              (196u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_PARAM_ID            (0x880000C4u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_OFFSET             (198u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_PARAM_ID           (0x840000C6u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[11u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_INV0_OFFSET         (200u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_INV0_PARAM_ID       (0x8B0000C8u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_OFFSET         (202u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_PARAM_ID       (0x4F0000CAu)

#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_OFFSET              (204u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_PARAM_ID            (0x8A0000CCu)

#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_OFFSET (206u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0000CEu)

#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_OFFSET        (207u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_PARAM_ID      (0x480000CFu)

#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_OFFSET              (208u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_PARAM_ID            (0x8C0000D0u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[12u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_OFFSET             (210u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_PARAM_ID           (0x800000D2u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[12u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_INV0_OFFSET         (212u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_INV0_PARAM_ID       (0x8D0000D4u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[12u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_OFFSET         (214u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_PARAM_ID       (0x490000D6u)

#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].diff)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_OFFSET              (216u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_PARAM_ID            (0x8E0000D8u)

#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[12u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_OFFSET (218u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0000DAu)

#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[12u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_OFFSET        (219u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_PARAM_ID      (0x4C0000DBu)

#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_OFFSET              (220u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_PARAM_ID            (0x8F0000DCu)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[13u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_OFFSET             (222u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_PARAM_ID           (0x830000DEu)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[13u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_INV0_OFFSET         (224u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_INV0_PARAM_ID       (0x830000E0u)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[13u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_OFFSET         (226u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_PARAM_ID       (0x470000E2u)

#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].diff)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_OFFSET              (228u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_PARAM_ID            (0x820000E4u)

#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[13u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_OFFSET (230u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x460000E6u)

#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[13u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_OFFSET        (231u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_PARAM_ID      (0x400000E7u)

#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_OFFSET              (232u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_PARAM_ID            (0x810000E8u)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[14u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_OFFSET             (234u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_PARAM_ID           (0x8D0000EAu)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[14u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_INV0_OFFSET         (236u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_INV0_PARAM_ID       (0x800000ECu)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[14u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_OFFSET         (238u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_PARAM_ID       (0x440000EEu)

#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].diff)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_OFFSET              (240u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_PARAM_ID            (0x860000F0u)

#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[14u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_OFFSET (242u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x420000F2u)

#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[14u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_OFFSET        (243u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_PARAM_ID      (0x440000F3u)

#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_OFFSET              (244u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_PARAM_ID            (0x870000F4u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[15u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_OFFSET             (246u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_PARAM_ID           (0x8B0000F6u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[15u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_INV0_OFFSET         (248u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_INV0_PARAM_ID       (0x840000F8u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[15u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_OFFSET         (250u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_PARAM_ID       (0x400000FAu)

#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].diff)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_OFFSET              (252u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_PARAM_ID            (0x850000FCu)

#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[15u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_OFFSET (254u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x410000FEu)

#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[15u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_OFFSET        (255u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_PARAM_ID      (0x470000FFu)

#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_OFFSET              (256u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_PARAM_ID            (0x8C000100u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[16u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_OFFSET             (258u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_PARAM_ID           (0x80000102u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[16u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_INV0_OFFSET         (260u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_INV0_PARAM_ID       (0x8D000104u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[16u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_OFFSET         (262u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_PARAM_ID       (0x49000106u)

#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].diff)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_OFFSET              (264u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_PARAM_ID            (0x8E000108u)

#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[16u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_OFFSET (266u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A00010Au)

#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[16u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_OFFSET        (267u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_PARAM_ID      (0x4C00010Bu)

#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_OFFSET              (268u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_PARAM_ID            (0x8F00010Cu)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[17u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_OFFSET             (270u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_PARAM_ID           (0x8300010Eu)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[17u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_INV0_OFFSET         (272u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_INV0_PARAM_ID       (0x89000110u)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[17u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_OFFSET         (274u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_PARAM_ID       (0x4D000112u)

#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].diff)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_OFFSET              (276u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_PARAM_ID            (0x88000114u)

#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[17u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_OFFSET (278u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C000116u)

#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[17u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_OFFSET        (279u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_PARAM_ID      (0x4A000117u)

#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_OFFSET              (280u)
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_PARAM_ID            (0x8B000118u)

#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[18u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_OFFSET             (282u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_PARAM_ID           (0x8700011Au)

#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[18u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_INV0_OFFSET         (284u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_INV0_PARAM_ID       (0x8A00011Cu)

#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[18u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_OFFSET         (286u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_PARAM_ID       (0x4E00011Eu)

#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].diff)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_OFFSET              (288u)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_PARAM_ID            (0x86000120u)

#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[18u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_OFFSET (290u)
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000122u)

#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[18u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_OFFSET        (291u)
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_PARAM_ID      (0x44000123u)

#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_OFFSET              (292u)
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_PARAM_ID            (0x87000124u)

#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[19u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_OFFSET             (294u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_PARAM_ID           (0x8B000126u)

#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[19u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_INV0_OFFSET         (296u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_INV0_PARAM_ID       (0x84000128u)

#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[19u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_OFFSET         (298u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_PARAM_ID       (0x4000012Au)

#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].diff)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_OFFSET              (300u)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_PARAM_ID            (0x8500012Cu)

#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[19u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_OFFSET (302u)
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4100012Eu)

#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[19u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_OFFSET        (303u)
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_PARAM_ID      (0x4700012Fu)

#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_OFFSET              (304u)
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_PARAM_ID            (0x83000130u)

#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[20u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_OFFSET             (306u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_PARAM_ID           (0x8F000132u)

#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[20u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_INV0_OFFSET         (308u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_INV0_PARAM_ID       (0x82000134u)

#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[20u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_OFFSET         (310u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_PARAM_ID       (0x46000136u)

#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].diff)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_OFFSET              (312u)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_PARAM_ID            (0x81000138u)

#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[20u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_OFFSET (314u)
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4500013Au)

#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[20u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_OFFSET        (315u)
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_PARAM_ID      (0x4300013Bu)

#define CapSense_TOUCHPAD0_RX7_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].raw[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_RAW0_OFFSET              (316u)
#define CapSense_TOUCHPAD0_RX7_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX0_RAW0_PARAM_ID            (0x8000013Cu)

#define CapSense_TOUCHPAD0_RX7_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[21u].bsln[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN0_OFFSET             (318u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN0_PARAM_ID           (0x8C00013Eu)

#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[21u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_INV0_OFFSET         (320u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_INV0_PARAM_ID       (0x81000140u)

#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[21u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_EXT0_OFFSET         (322u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX7_TX0_BSLN_EXT0_PARAM_ID       (0x45000142u)

#define CapSense_TOUCHPAD0_RX7_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].diff)
#define CapSense_TOUCHPAD0_RX7_TX0_DIFF_OFFSET              (324u)
#define CapSense_TOUCHPAD0_RX7_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX0_DIFF_PARAM_ID            (0x80000144u)

#define CapSense_TOUCHPAD0_RX7_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[21u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_NEG_BSLN_RST_CNT0_OFFSET (326u)
#define CapSense_TOUCHPAD0_RX7_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX7_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x44000146u)

#define CapSense_TOUCHPAD0_RX7_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[21u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX7_TX0_IDAC_COMP0_OFFSET        (327u)
#define CapSense_TOUCHPAD0_RX7_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX7_TX0_IDAC_COMP0_PARAM_ID      (0x42000147u)

#define CapSense_TOUCHPAD0_RX7_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].raw[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_RAW0_OFFSET              (328u)
#define CapSense_TOUCHPAD0_RX7_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX1_RAW0_PARAM_ID            (0x83000148u)

#define CapSense_TOUCHPAD0_RX7_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[22u].bsln[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN0_OFFSET             (330u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN0_PARAM_ID           (0x8F00014Au)

#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[22u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_INV0_OFFSET         (332u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_INV0_PARAM_ID       (0x8200014Cu)

#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[22u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_EXT0_OFFSET         (334u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX7_TX1_BSLN_EXT0_PARAM_ID       (0x4600014Eu)

#define CapSense_TOUCHPAD0_RX7_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].diff)
#define CapSense_TOUCHPAD0_RX7_TX1_DIFF_OFFSET              (336u)
#define CapSense_TOUCHPAD0_RX7_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX1_DIFF_PARAM_ID            (0x84000150u)

#define CapSense_TOUCHPAD0_RX7_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[22u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_NEG_BSLN_RST_CNT0_OFFSET (338u)
#define CapSense_TOUCHPAD0_RX7_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX7_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x40000152u)

#define CapSense_TOUCHPAD0_RX7_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[22u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX7_TX1_IDAC_COMP0_OFFSET        (339u)
#define CapSense_TOUCHPAD0_RX7_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX7_TX1_IDAC_COMP0_PARAM_ID      (0x46000153u)

#define CapSense_TOUCHPAD0_RX7_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].raw[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_RAW0_OFFSET              (340u)
#define CapSense_TOUCHPAD0_RX7_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX2_RAW0_PARAM_ID            (0x85000154u)

#define CapSense_TOUCHPAD0_RX7_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[23u].bsln[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN0_OFFSET             (342u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN0_PARAM_ID           (0x89000156u)

#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[23u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_INV0_OFFSET         (344u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_INV0_PARAM_ID       (0x86000158u)

#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[23u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_EXT0_OFFSET         (346u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX7_TX2_BSLN_EXT0_PARAM_ID       (0x4200015Au)

#define CapSense_TOUCHPAD0_RX7_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].diff)
#define CapSense_TOUCHPAD0_RX7_TX2_DIFF_OFFSET              (348u)
#define CapSense_TOUCHPAD0_RX7_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX7_TX2_DIFF_PARAM_ID            (0x8700015Cu)

#define CapSense_TOUCHPAD0_RX7_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[23u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_NEG_BSLN_RST_CNT0_OFFSET (350u)
#define CapSense_TOUCHPAD0_RX7_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX7_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300015Eu)

#define CapSense_TOUCHPAD0_RX7_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[23u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX7_TX2_IDAC_COMP0_OFFSET        (351u)
#define CapSense_TOUCHPAD0_RX7_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX7_TX2_IDAC_COMP0_PARAM_ID      (0x4500015Fu)

#define CapSense_TOUCHPAD0_RX8_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].raw[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_RAW0_OFFSET              (352u)
#define CapSense_TOUCHPAD0_RX8_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX0_RAW0_PARAM_ID            (0x8B000160u)

#define CapSense_TOUCHPAD0_RX8_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[24u].bsln[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN0_OFFSET             (354u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN0_PARAM_ID           (0x87000162u)

#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[24u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_INV0_OFFSET         (356u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_INV0_PARAM_ID       (0x8A000164u)

#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[24u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_EXT0_OFFSET         (358u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX8_TX0_BSLN_EXT0_PARAM_ID       (0x4E000166u)

#define CapSense_TOUCHPAD0_RX8_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].diff)
#define CapSense_TOUCHPAD0_RX8_TX0_DIFF_OFFSET              (360u)
#define CapSense_TOUCHPAD0_RX8_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX0_DIFF_PARAM_ID            (0x89000168u)

#define CapSense_TOUCHPAD0_RX8_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[24u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_NEG_BSLN_RST_CNT0_OFFSET (362u)
#define CapSense_TOUCHPAD0_RX8_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX8_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00016Au)

#define CapSense_TOUCHPAD0_RX8_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[24u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX8_TX0_IDAC_COMP0_OFFSET        (363u)
#define CapSense_TOUCHPAD0_RX8_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX8_TX0_IDAC_COMP0_PARAM_ID      (0x4B00016Bu)

#define CapSense_TOUCHPAD0_RX8_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].raw[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_RAW0_OFFSET              (364u)
#define CapSense_TOUCHPAD0_RX8_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX1_RAW0_PARAM_ID            (0x8800016Cu)

#define CapSense_TOUCHPAD0_RX8_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[25u].bsln[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN0_OFFSET             (366u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN0_PARAM_ID           (0x8400016Eu)

#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[25u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_INV0_OFFSET         (368u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_INV0_PARAM_ID       (0x8E000170u)

#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[25u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_EXT0_OFFSET         (370u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX8_TX1_BSLN_EXT0_PARAM_ID       (0x4A000172u)

#define CapSense_TOUCHPAD0_RX8_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].diff)
#define CapSense_TOUCHPAD0_RX8_TX1_DIFF_OFFSET              (372u)
#define CapSense_TOUCHPAD0_RX8_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX1_DIFF_PARAM_ID            (0x8F000174u)

#define CapSense_TOUCHPAD0_RX8_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[25u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_NEG_BSLN_RST_CNT0_OFFSET (374u)
#define CapSense_TOUCHPAD0_RX8_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX8_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000176u)

#define CapSense_TOUCHPAD0_RX8_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[25u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX8_TX1_IDAC_COMP0_OFFSET        (375u)
#define CapSense_TOUCHPAD0_RX8_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX8_TX1_IDAC_COMP0_PARAM_ID      (0x4D000177u)

#define CapSense_TOUCHPAD0_RX8_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].raw[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_RAW0_OFFSET              (376u)
#define CapSense_TOUCHPAD0_RX8_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX2_RAW0_PARAM_ID            (0x8C000178u)

#define CapSense_TOUCHPAD0_RX8_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[26u].bsln[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN0_OFFSET             (378u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN0_PARAM_ID           (0x8000017Au)

#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[26u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_INV0_OFFSET         (380u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_INV0_PARAM_ID       (0x8D00017Cu)

#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[26u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_EXT0_OFFSET         (382u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX8_TX2_BSLN_EXT0_PARAM_ID       (0x4900017Eu)

#define CapSense_TOUCHPAD0_RX8_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].diff)
#define CapSense_TOUCHPAD0_RX8_TX2_DIFF_OFFSET              (384u)
#define CapSense_TOUCHPAD0_RX8_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX8_TX2_DIFF_PARAM_ID            (0x8F000180u)

#define CapSense_TOUCHPAD0_RX8_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[26u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_NEG_BSLN_RST_CNT0_OFFSET (386u)
#define CapSense_TOUCHPAD0_RX8_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX8_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000182u)

#define CapSense_TOUCHPAD0_RX8_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[26u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX8_TX2_IDAC_COMP0_OFFSET        (387u)
#define CapSense_TOUCHPAD0_RX8_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX8_TX2_IDAC_COMP0_PARAM_ID      (0x4D000183u)

#define CapSense_TOUCHPAD0_RX9_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].raw[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_RAW0_OFFSET              (388u)
#define CapSense_TOUCHPAD0_RX9_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX0_RAW0_PARAM_ID            (0x8E000184u)

#define CapSense_TOUCHPAD0_RX9_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[27u].bsln[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN0_OFFSET             (390u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN0_PARAM_ID           (0x82000186u)

#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[27u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_INV0_OFFSET         (392u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_INV0_PARAM_ID       (0x8D000188u)

#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[27u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_EXT0_OFFSET         (394u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX9_TX0_BSLN_EXT0_PARAM_ID       (0x4900018Au)

#define CapSense_TOUCHPAD0_RX9_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].diff)
#define CapSense_TOUCHPAD0_RX9_TX0_DIFF_OFFSET              (396u)
#define CapSense_TOUCHPAD0_RX9_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX0_DIFF_PARAM_ID            (0x8C00018Cu)

#define CapSense_TOUCHPAD0_RX9_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[27u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_NEG_BSLN_RST_CNT0_OFFSET (398u)
#define CapSense_TOUCHPAD0_RX9_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX9_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4800018Eu)

#define CapSense_TOUCHPAD0_RX9_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[27u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX9_TX0_IDAC_COMP0_OFFSET        (399u)
#define CapSense_TOUCHPAD0_RX9_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX9_TX0_IDAC_COMP0_PARAM_ID      (0x4E00018Fu)

#define CapSense_TOUCHPAD0_RX9_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].raw[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_RAW0_OFFSET              (400u)
#define CapSense_TOUCHPAD0_RX9_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX1_RAW0_PARAM_ID            (0x8A000190u)

#define CapSense_TOUCHPAD0_RX9_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[28u].bsln[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN0_OFFSET             (402u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN0_PARAM_ID           (0x86000192u)

#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[28u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_INV0_OFFSET         (404u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_INV0_PARAM_ID       (0x8B000194u)

#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[28u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_EXT0_OFFSET         (406u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX9_TX1_BSLN_EXT0_PARAM_ID       (0x4F000196u)

#define CapSense_TOUCHPAD0_RX9_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].diff)
#define CapSense_TOUCHPAD0_RX9_TX1_DIFF_OFFSET              (408u)
#define CapSense_TOUCHPAD0_RX9_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX1_DIFF_PARAM_ID            (0x88000198u)

#define CapSense_TOUCHPAD0_RX9_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[28u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_NEG_BSLN_RST_CNT0_OFFSET (410u)
#define CapSense_TOUCHPAD0_RX9_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX9_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C00019Au)

#define CapSense_TOUCHPAD0_RX9_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[28u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX9_TX1_IDAC_COMP0_OFFSET        (411u)
#define CapSense_TOUCHPAD0_RX9_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX9_TX1_IDAC_COMP0_PARAM_ID      (0x4A00019Bu)

#define CapSense_TOUCHPAD0_RX9_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].raw[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_RAW0_OFFSET              (412u)
#define CapSense_TOUCHPAD0_RX9_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX2_RAW0_PARAM_ID            (0x8900019Cu)

#define CapSense_TOUCHPAD0_RX9_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[29u].bsln[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN0_OFFSET             (414u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN0_PARAM_ID           (0x8500019Eu)

#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_INV0_VALUE          (CapSense_dsRam.snsList.touchpad0[29u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_INV0_OFFSET         (416u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_INV0_SIZE           (2u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_INV0_PARAM_ID       (0x850001A0u)

#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[29u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_EXT0_OFFSET         (418u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX9_TX2_BSLN_EXT0_PARAM_ID       (0x410001A2u)

#define CapSense_TOUCHPAD0_RX9_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].diff)
#define CapSense_TOUCHPAD0_RX9_TX2_DIFF_OFFSET              (420u)
#define CapSense_TOUCHPAD0_RX9_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX9_TX2_DIFF_PARAM_ID            (0x840001A4u)

#define CapSense_TOUCHPAD0_RX9_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[29u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_NEG_BSLN_RST_CNT0_OFFSET (422u)
#define CapSense_TOUCHPAD0_RX9_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX9_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x400001A6u)

#define CapSense_TOUCHPAD0_RX9_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[29u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX9_TX2_IDAC_COMP0_OFFSET        (423u)
#define CapSense_TOUCHPAD0_RX9_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX9_TX2_IDAC_COMP0_PARAM_ID      (0x460001A7u)

#define CapSense_TOUCHPAD0_RX10_TX0_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[30u].raw[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_RAW0_OFFSET             (424u)
#define CapSense_TOUCHPAD0_RX10_TX0_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX0_RAW0_PARAM_ID           (0x870001A8u)

#define CapSense_TOUCHPAD0_RX10_TX0_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[30u].bsln[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN0_OFFSET            (426u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN0_PARAM_ID          (0x8B0001AAu)

#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[30u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_INV0_OFFSET        (428u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_INV0_PARAM_ID      (0x860001ACu)

#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[30u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_EXT0_OFFSET        (430u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX10_TX0_BSLN_EXT0_PARAM_ID      (0x420001AEu)

#define CapSense_TOUCHPAD0_RX10_TX0_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[30u].diff)
#define CapSense_TOUCHPAD0_RX10_TX0_DIFF_OFFSET             (432u)
#define CapSense_TOUCHPAD0_RX10_TX0_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX0_DIFF_PARAM_ID           (0x800001B0u)

#define CapSense_TOUCHPAD0_RX10_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[30u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_NEG_BSLN_RST_CNT0_OFFSET (434u)
#define CapSense_TOUCHPAD0_RX10_TX0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX10_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x440001B2u)

#define CapSense_TOUCHPAD0_RX10_TX0_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[30u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX10_TX0_IDAC_COMP0_OFFSET       (435u)
#define CapSense_TOUCHPAD0_RX10_TX0_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX10_TX0_IDAC_COMP0_PARAM_ID     (0x420001B3u)

#define CapSense_TOUCHPAD0_RX10_TX1_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[31u].raw[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_RAW0_OFFSET             (436u)
#define CapSense_TOUCHPAD0_RX10_TX1_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX1_RAW0_PARAM_ID           (0x810001B4u)

#define CapSense_TOUCHPAD0_RX10_TX1_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[31u].bsln[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN0_OFFSET            (438u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN0_PARAM_ID          (0x8D0001B6u)

#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[31u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_INV0_OFFSET        (440u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_INV0_PARAM_ID      (0x820001B8u)

#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[31u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_EXT0_OFFSET        (442u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX10_TX1_BSLN_EXT0_PARAM_ID      (0x460001BAu)

#define CapSense_TOUCHPAD0_RX10_TX1_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[31u].diff)
#define CapSense_TOUCHPAD0_RX10_TX1_DIFF_OFFSET             (444u)
#define CapSense_TOUCHPAD0_RX10_TX1_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX1_DIFF_PARAM_ID           (0x830001BCu)

#define CapSense_TOUCHPAD0_RX10_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[31u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_NEG_BSLN_RST_CNT0_OFFSET (446u)
#define CapSense_TOUCHPAD0_RX10_TX1_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX10_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x470001BEu)

#define CapSense_TOUCHPAD0_RX10_TX1_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[31u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX10_TX1_IDAC_COMP0_OFFSET       (447u)
#define CapSense_TOUCHPAD0_RX10_TX1_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX10_TX1_IDAC_COMP0_PARAM_ID     (0x410001BFu)

#define CapSense_TOUCHPAD0_RX10_TX2_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[32u].raw[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_RAW0_OFFSET             (448u)
#define CapSense_TOUCHPAD0_RX10_TX2_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX2_RAW0_PARAM_ID           (0x820001C0u)

#define CapSense_TOUCHPAD0_RX10_TX2_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[32u].bsln[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN0_OFFSET            (450u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN0_PARAM_ID          (0x8E0001C2u)

#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[32u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_INV0_OFFSET        (452u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_INV0_PARAM_ID      (0x830001C4u)

#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[32u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_EXT0_OFFSET        (454u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX10_TX2_BSLN_EXT0_PARAM_ID      (0x470001C6u)

#define CapSense_TOUCHPAD0_RX10_TX2_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[32u].diff)
#define CapSense_TOUCHPAD0_RX10_TX2_DIFF_OFFSET             (456u)
#define CapSense_TOUCHPAD0_RX10_TX2_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX10_TX2_DIFF_PARAM_ID           (0x800001C8u)

#define CapSense_TOUCHPAD0_RX10_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[32u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_NEG_BSLN_RST_CNT0_OFFSET (458u)
#define CapSense_TOUCHPAD0_RX10_TX2_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX10_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x440001CAu)

#define CapSense_TOUCHPAD0_RX10_TX2_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[32u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX10_TX2_IDAC_COMP0_OFFSET       (459u)
#define CapSense_TOUCHPAD0_RX10_TX2_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX10_TX2_IDAC_COMP0_PARAM_ID     (0x420001CBu)

#define CapSense_TOUCHPAD0_RX11_TX0_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[33u].raw[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_RAW0_OFFSET             (460u)
#define CapSense_TOUCHPAD0_RX11_TX0_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX0_RAW0_PARAM_ID           (0x810001CCu)

#define CapSense_TOUCHPAD0_RX11_TX0_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[33u].bsln[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN0_OFFSET            (462u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN0_PARAM_ID          (0x8D0001CEu)

#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[33u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_INV0_OFFSET        (464u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_INV0_PARAM_ID      (0x870001D0u)

#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[33u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_EXT0_OFFSET        (466u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX11_TX0_BSLN_EXT0_PARAM_ID      (0x430001D2u)

#define CapSense_TOUCHPAD0_RX11_TX0_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[33u].diff)
#define CapSense_TOUCHPAD0_RX11_TX0_DIFF_OFFSET             (468u)
#define CapSense_TOUCHPAD0_RX11_TX0_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX0_DIFF_PARAM_ID           (0x860001D4u)

#define CapSense_TOUCHPAD0_RX11_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[33u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_NEG_BSLN_RST_CNT0_OFFSET (470u)
#define CapSense_TOUCHPAD0_RX11_TX0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX11_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420001D6u)

#define CapSense_TOUCHPAD0_RX11_TX0_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[33u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX11_TX0_IDAC_COMP0_OFFSET       (471u)
#define CapSense_TOUCHPAD0_RX11_TX0_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX11_TX0_IDAC_COMP0_PARAM_ID     (0x440001D7u)

#define CapSense_TOUCHPAD0_RX11_TX1_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[34u].raw[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_RAW0_OFFSET             (472u)
#define CapSense_TOUCHPAD0_RX11_TX1_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX1_RAW0_PARAM_ID           (0x850001D8u)

#define CapSense_TOUCHPAD0_RX11_TX1_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[34u].bsln[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN0_OFFSET            (474u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN0_PARAM_ID          (0x890001DAu)

#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[34u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_INV0_OFFSET        (476u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_INV0_PARAM_ID      (0x840001DCu)

#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[34u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_EXT0_OFFSET        (478u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX11_TX1_BSLN_EXT0_PARAM_ID      (0x400001DEu)

#define CapSense_TOUCHPAD0_RX11_TX1_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[34u].diff)
#define CapSense_TOUCHPAD0_RX11_TX1_DIFF_OFFSET             (480u)
#define CapSense_TOUCHPAD0_RX11_TX1_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX1_DIFF_PARAM_ID           (0x880001E0u)

#define CapSense_TOUCHPAD0_RX11_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[34u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_NEG_BSLN_RST_CNT0_OFFSET (482u)
#define CapSense_TOUCHPAD0_RX11_TX1_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX11_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0001E2u)

#define CapSense_TOUCHPAD0_RX11_TX1_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[34u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX11_TX1_IDAC_COMP0_OFFSET       (483u)
#define CapSense_TOUCHPAD0_RX11_TX1_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX11_TX1_IDAC_COMP0_PARAM_ID     (0x4A0001E3u)

#define CapSense_TOUCHPAD0_RX11_TX2_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[35u].raw[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_RAW0_OFFSET             (484u)
#define CapSense_TOUCHPAD0_RX11_TX2_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX2_RAW0_PARAM_ID           (0x890001E4u)

#define CapSense_TOUCHPAD0_RX11_TX2_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[35u].bsln[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN0_OFFSET            (486u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN0_PARAM_ID          (0x850001E6u)

#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[35u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_INV0_OFFSET        (488u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_INV0_PARAM_ID      (0x8A0001E8u)

#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[35u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_EXT0_OFFSET        (490u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX11_TX2_BSLN_EXT0_PARAM_ID      (0x4E0001EAu)

#define CapSense_TOUCHPAD0_RX11_TX2_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[35u].diff)
#define CapSense_TOUCHPAD0_RX11_TX2_DIFF_OFFSET             (492u)
#define CapSense_TOUCHPAD0_RX11_TX2_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX11_TX2_DIFF_PARAM_ID           (0x8B0001ECu)

#define CapSense_TOUCHPAD0_RX11_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[35u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_NEG_BSLN_RST_CNT0_OFFSET (494u)
#define CapSense_TOUCHPAD0_RX11_TX2_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX11_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0001EEu)

#define CapSense_TOUCHPAD0_RX11_TX2_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[35u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX11_TX2_IDAC_COMP0_OFFSET       (495u)
#define CapSense_TOUCHPAD0_RX11_TX2_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX11_TX2_IDAC_COMP0_PARAM_ID     (0x490001EFu)

#define CapSense_TOUCHPAD0_RX12_TX0_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[36u].raw[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_RAW0_OFFSET             (496u)
#define CapSense_TOUCHPAD0_RX12_TX0_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX0_RAW0_PARAM_ID           (0x8D0001F0u)

#define CapSense_TOUCHPAD0_RX12_TX0_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[36u].bsln[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN0_OFFSET            (498u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN0_PARAM_ID          (0x810001F2u)

#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[36u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_INV0_OFFSET        (500u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_INV0_PARAM_ID      (0x8C0001F4u)

#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[36u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_EXT0_OFFSET        (502u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX12_TX0_BSLN_EXT0_PARAM_ID      (0x480001F6u)

#define CapSense_TOUCHPAD0_RX12_TX0_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[36u].diff)
#define CapSense_TOUCHPAD0_RX12_TX0_DIFF_OFFSET             (504u)
#define CapSense_TOUCHPAD0_RX12_TX0_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX0_DIFF_PARAM_ID           (0x8F0001F8u)

#define CapSense_TOUCHPAD0_RX12_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[36u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_NEG_BSLN_RST_CNT0_OFFSET (506u)
#define CapSense_TOUCHPAD0_RX12_TX0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX12_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B0001FAu)

#define CapSense_TOUCHPAD0_RX12_TX0_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[36u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX12_TX0_IDAC_COMP0_OFFSET       (507u)
#define CapSense_TOUCHPAD0_RX12_TX0_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX12_TX0_IDAC_COMP0_PARAM_ID     (0x4D0001FBu)

#define CapSense_TOUCHPAD0_RX12_TX1_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[37u].raw[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_RAW0_OFFSET             (508u)
#define CapSense_TOUCHPAD0_RX12_TX1_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX1_RAW0_PARAM_ID           (0x8E0001FCu)

#define CapSense_TOUCHPAD0_RX12_TX1_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[37u].bsln[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN0_OFFSET            (510u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN0_PARAM_ID          (0x820001FEu)

#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[37u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_INV0_OFFSET        (512u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_INV0_PARAM_ID      (0x88000200u)

#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[37u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_EXT0_OFFSET        (514u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX12_TX1_BSLN_EXT0_PARAM_ID      (0x4C000202u)

#define CapSense_TOUCHPAD0_RX12_TX1_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[37u].diff)
#define CapSense_TOUCHPAD0_RX12_TX1_DIFF_OFFSET             (516u)
#define CapSense_TOUCHPAD0_RX12_TX1_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX1_DIFF_PARAM_ID           (0x89000204u)

#define CapSense_TOUCHPAD0_RX12_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[37u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_NEG_BSLN_RST_CNT0_OFFSET (518u)
#define CapSense_TOUCHPAD0_RX12_TX1_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX12_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000206u)

#define CapSense_TOUCHPAD0_RX12_TX1_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[37u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX12_TX1_IDAC_COMP0_OFFSET       (519u)
#define CapSense_TOUCHPAD0_RX12_TX1_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX12_TX1_IDAC_COMP0_PARAM_ID     (0x4B000207u)

#define CapSense_TOUCHPAD0_RX12_TX2_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[38u].raw[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_RAW0_OFFSET             (520u)
#define CapSense_TOUCHPAD0_RX12_TX2_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX2_RAW0_PARAM_ID           (0x8A000208u)

#define CapSense_TOUCHPAD0_RX12_TX2_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[38u].bsln[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN0_OFFSET            (522u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN0_PARAM_ID          (0x8600020Au)

#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[38u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_INV0_OFFSET        (524u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_INV0_PARAM_ID      (0x8B00020Cu)

#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[38u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_EXT0_OFFSET        (526u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX12_TX2_BSLN_EXT0_PARAM_ID      (0x4F00020Eu)

#define CapSense_TOUCHPAD0_RX12_TX2_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[38u].diff)
#define CapSense_TOUCHPAD0_RX12_TX2_DIFF_OFFSET             (528u)
#define CapSense_TOUCHPAD0_RX12_TX2_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX12_TX2_DIFF_PARAM_ID           (0x8D000210u)

#define CapSense_TOUCHPAD0_RX12_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[38u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_NEG_BSLN_RST_CNT0_OFFSET (530u)
#define CapSense_TOUCHPAD0_RX12_TX2_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX12_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000212u)

#define CapSense_TOUCHPAD0_RX12_TX2_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[38u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX12_TX2_IDAC_COMP0_OFFSET       (531u)
#define CapSense_TOUCHPAD0_RX12_TX2_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX12_TX2_IDAC_COMP0_PARAM_ID     (0x4F000213u)

#define CapSense_TOUCHPAD0_RX13_TX0_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[39u].raw[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_RAW0_OFFSET             (532u)
#define CapSense_TOUCHPAD0_RX13_TX0_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX0_RAW0_PARAM_ID           (0x8C000214u)

#define CapSense_TOUCHPAD0_RX13_TX0_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[39u].bsln[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN0_OFFSET            (534u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN0_PARAM_ID          (0x80000216u)

#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[39u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_INV0_OFFSET        (536u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_INV0_PARAM_ID      (0x8F000218u)

#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[39u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_EXT0_OFFSET        (538u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX13_TX0_BSLN_EXT0_PARAM_ID      (0x4B00021Au)

#define CapSense_TOUCHPAD0_RX13_TX0_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[39u].diff)
#define CapSense_TOUCHPAD0_RX13_TX0_DIFF_OFFSET             (540u)
#define CapSense_TOUCHPAD0_RX13_TX0_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX0_DIFF_PARAM_ID           (0x8E00021Cu)

#define CapSense_TOUCHPAD0_RX13_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[39u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_NEG_BSLN_RST_CNT0_OFFSET (542u)
#define CapSense_TOUCHPAD0_RX13_TX0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX13_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A00021Eu)

#define CapSense_TOUCHPAD0_RX13_TX0_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[39u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX13_TX0_IDAC_COMP0_OFFSET       (543u)
#define CapSense_TOUCHPAD0_RX13_TX0_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX13_TX0_IDAC_COMP0_PARAM_ID     (0x4C00021Fu)

#define CapSense_TOUCHPAD0_RX13_TX1_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[40u].raw[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_RAW0_OFFSET             (544u)
#define CapSense_TOUCHPAD0_RX13_TX1_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX1_RAW0_PARAM_ID           (0x82000220u)

#define CapSense_TOUCHPAD0_RX13_TX1_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[40u].bsln[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN0_OFFSET            (546u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN0_PARAM_ID          (0x8E000222u)

#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[40u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_INV0_OFFSET        (548u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_INV0_PARAM_ID      (0x83000224u)

#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[40u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_EXT0_OFFSET        (550u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX13_TX1_BSLN_EXT0_PARAM_ID      (0x47000226u)

#define CapSense_TOUCHPAD0_RX13_TX1_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[40u].diff)
#define CapSense_TOUCHPAD0_RX13_TX1_DIFF_OFFSET             (552u)
#define CapSense_TOUCHPAD0_RX13_TX1_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX1_DIFF_PARAM_ID           (0x80000228u)

#define CapSense_TOUCHPAD0_RX13_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[40u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_NEG_BSLN_RST_CNT0_OFFSET (554u)
#define CapSense_TOUCHPAD0_RX13_TX1_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX13_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4400022Au)

#define CapSense_TOUCHPAD0_RX13_TX1_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[40u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX13_TX1_IDAC_COMP0_OFFSET       (555u)
#define CapSense_TOUCHPAD0_RX13_TX1_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX13_TX1_IDAC_COMP0_PARAM_ID     (0x4200022Bu)

#define CapSense_TOUCHPAD0_RX13_TX2_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[41u].raw[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_RAW0_OFFSET             (556u)
#define CapSense_TOUCHPAD0_RX13_TX2_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX2_RAW0_PARAM_ID           (0x8100022Cu)

#define CapSense_TOUCHPAD0_RX13_TX2_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[41u].bsln[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN0_OFFSET            (558u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN0_PARAM_ID          (0x8D00022Eu)

#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[41u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_INV0_OFFSET        (560u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_INV0_PARAM_ID      (0x87000230u)

#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[41u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_EXT0_OFFSET        (562u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX13_TX2_BSLN_EXT0_PARAM_ID      (0x43000232u)

#define CapSense_TOUCHPAD0_RX13_TX2_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[41u].diff)
#define CapSense_TOUCHPAD0_RX13_TX2_DIFF_OFFSET             (564u)
#define CapSense_TOUCHPAD0_RX13_TX2_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX13_TX2_DIFF_PARAM_ID           (0x86000234u)

#define CapSense_TOUCHPAD0_RX13_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[41u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_NEG_BSLN_RST_CNT0_OFFSET (566u)
#define CapSense_TOUCHPAD0_RX13_TX2_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX13_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000236u)

#define CapSense_TOUCHPAD0_RX13_TX2_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[41u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX13_TX2_IDAC_COMP0_OFFSET       (567u)
#define CapSense_TOUCHPAD0_RX13_TX2_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX13_TX2_IDAC_COMP0_PARAM_ID     (0x44000237u)

#define CapSense_TOUCHPAD0_RX14_TX0_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[42u].raw[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_RAW0_OFFSET             (568u)
#define CapSense_TOUCHPAD0_RX14_TX0_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX0_RAW0_PARAM_ID           (0x85000238u)

#define CapSense_TOUCHPAD0_RX14_TX0_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[42u].bsln[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN0_OFFSET            (570u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN0_PARAM_ID          (0x8900023Au)

#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[42u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_INV0_OFFSET        (572u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_INV0_PARAM_ID      (0x8400023Cu)

#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[42u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_EXT0_OFFSET        (574u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX14_TX0_BSLN_EXT0_PARAM_ID      (0x4000023Eu)

#define CapSense_TOUCHPAD0_RX14_TX0_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[42u].diff)
#define CapSense_TOUCHPAD0_RX14_TX0_DIFF_OFFSET             (576u)
#define CapSense_TOUCHPAD0_RX14_TX0_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX0_DIFF_PARAM_ID           (0x85000240u)

#define CapSense_TOUCHPAD0_RX14_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[42u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_NEG_BSLN_RST_CNT0_OFFSET (578u)
#define CapSense_TOUCHPAD0_RX14_TX0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX14_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000242u)

#define CapSense_TOUCHPAD0_RX14_TX0_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[42u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX14_TX0_IDAC_COMP0_OFFSET       (579u)
#define CapSense_TOUCHPAD0_RX14_TX0_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX14_TX0_IDAC_COMP0_PARAM_ID     (0x47000243u)

#define CapSense_TOUCHPAD0_RX14_TX1_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[43u].raw[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_RAW0_OFFSET             (580u)
#define CapSense_TOUCHPAD0_RX14_TX1_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX1_RAW0_PARAM_ID           (0x84000244u)

#define CapSense_TOUCHPAD0_RX14_TX1_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[43u].bsln[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN0_OFFSET            (582u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN0_PARAM_ID          (0x88000246u)

#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[43u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_INV0_OFFSET        (584u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_INV0_PARAM_ID      (0x87000248u)

#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[43u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_EXT0_OFFSET        (586u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX14_TX1_BSLN_EXT0_PARAM_ID      (0x4300024Au)

#define CapSense_TOUCHPAD0_RX14_TX1_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[43u].diff)
#define CapSense_TOUCHPAD0_RX14_TX1_DIFF_OFFSET             (588u)
#define CapSense_TOUCHPAD0_RX14_TX1_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX1_DIFF_PARAM_ID           (0x8600024Cu)

#define CapSense_TOUCHPAD0_RX14_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[43u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_NEG_BSLN_RST_CNT0_OFFSET (590u)
#define CapSense_TOUCHPAD0_RX14_TX1_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX14_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4200024Eu)

#define CapSense_TOUCHPAD0_RX14_TX1_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[43u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX14_TX1_IDAC_COMP0_OFFSET       (591u)
#define CapSense_TOUCHPAD0_RX14_TX1_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX14_TX1_IDAC_COMP0_PARAM_ID     (0x4400024Fu)

#define CapSense_TOUCHPAD0_RX14_TX2_RAW0_VALUE              (CapSense_dsRam.snsList.touchpad0[44u].raw[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_RAW0_OFFSET             (592u)
#define CapSense_TOUCHPAD0_RX14_TX2_RAW0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX2_RAW0_PARAM_ID           (0x80000250u)

#define CapSense_TOUCHPAD0_RX14_TX2_BSLN0_VALUE             (CapSense_dsRam.snsList.touchpad0[44u].bsln[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN0_OFFSET            (594u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN0_SIZE              (2u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN0_PARAM_ID          (0x8C000252u)

#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_INV0_VALUE         (CapSense_dsRam.snsList.touchpad0[44u].bslnInv[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_INV0_OFFSET        (596u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_INV0_SIZE          (2u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_INV0_PARAM_ID      (0x81000254u)

#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_EXT0_VALUE         (CapSense_dsRam.snsList.touchpad0[44u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_EXT0_OFFSET        (598u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_EXT0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX14_TX2_BSLN_EXT0_PARAM_ID      (0x45000256u)

#define CapSense_TOUCHPAD0_RX14_TX2_DIFF_VALUE              (CapSense_dsRam.snsList.touchpad0[44u].diff)
#define CapSense_TOUCHPAD0_RX14_TX2_DIFF_OFFSET             (600u)
#define CapSense_TOUCHPAD0_RX14_TX2_DIFF_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX14_TX2_DIFF_PARAM_ID           (0x82000258u)

#define CapSense_TOUCHPAD0_RX14_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.touchpad0[44u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_NEG_BSLN_RST_CNT0_OFFSET (602u)
#define CapSense_TOUCHPAD0_RX14_TX2_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define CapSense_TOUCHPAD0_RX14_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4600025Au)

#define CapSense_TOUCHPAD0_RX14_TX2_IDAC_COMP0_VALUE        (CapSense_dsRam.snsList.touchpad0[44u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX14_TX2_IDAC_COMP0_OFFSET       (603u)
#define CapSense_TOUCHPAD0_RX14_TX2_IDAC_COMP0_SIZE         (1u)
#define CapSense_TOUCHPAD0_RX14_TX2_IDAC_COMP0_PARAM_ID     (0x4000025Bu)

#define CapSense_TEST_RESULT_MASK_VALUE                     (CapSense_dsRam.selfTest.testResultMask)
#define CapSense_TEST_RESULT_MASK_OFFSET                    (604u)
#define CapSense_TEST_RESULT_MASK_SIZE                      (4u)
#define CapSense_TEST_RESULT_MASK_PARAM_ID                  (0xE700025Cu)

#define CapSense_EXT_CAP0_VALUE                             (CapSense_dsRam.selfTest.extCap[0u])
#define CapSense_EXT_CAP0_OFFSET                            (608u)
#define CapSense_EXT_CAP0_SIZE                              (2u)
#define CapSense_EXT_CAP0_PARAM_ID                          (0xA4000260u)

#define CapSense_EXT_CAP1_VALUE                             (CapSense_dsRam.selfTest.extCap[1u])
#define CapSense_EXT_CAP1_OFFSET                            (610u)
#define CapSense_EXT_CAP1_SIZE                              (2u)
#define CapSense_EXT_CAP1_PARAM_ID                          (0xA8000262u)

#define CapSense_VDDA_VOLTAGE_VALUE                         (CapSense_dsRam.selfTest.vddaVoltage)
#define CapSense_VDDA_VOLTAGE_OFFSET                        (612u)
#define CapSense_VDDA_VOLTAGE_SIZE                          (2u)
#define CapSense_VDDA_VOLTAGE_PARAM_ID                      (0xA5000264u)

#define CapSense_GLB_CRC_CALC_VALUE                         (CapSense_dsRam.selfTest.glbCrcCalc)
#define CapSense_GLB_CRC_CALC_OFFSET                        (614u)
#define CapSense_GLB_CRC_CALC_SIZE                          (2u)
#define CapSense_GLB_CRC_CALC_PARAM_ID                      (0xA9000266u)

#define CapSense_WDGT_CRC_CALC_VALUE                        (CapSense_dsRam.selfTest.wdgtCrcCalc)
#define CapSense_WDGT_CRC_CALC_OFFSET                       (616u)
#define CapSense_WDGT_CRC_CALC_SIZE                         (2u)
#define CapSense_WDGT_CRC_CALC_PARAM_ID                     (0xA6000268u)

#define CapSense_WDGT_CRC_ID_VALUE                          (CapSense_dsRam.selfTest.wdgtCrcId)
#define CapSense_WDGT_CRC_ID_OFFSET                         (618u)
#define CapSense_WDGT_CRC_ID_SIZE                           (1u)
#define CapSense_WDGT_CRC_ID_PARAM_ID                       (0x6200026Au)

#define CapSense_INV_BSLN_WDGT_ID_VALUE                     (CapSense_dsRam.selfTest.invBslnWdgtId)
#define CapSense_INV_BSLN_WDGT_ID_OFFSET                    (619u)
#define CapSense_INV_BSLN_WDGT_ID_SIZE                      (1u)
#define CapSense_INV_BSLN_WDGT_ID_PARAM_ID                  (0x6400026Bu)

#define CapSense_INV_BSLN_SNS_ID_VALUE                      (CapSense_dsRam.selfTest.invBslnSnsId)
#define CapSense_INV_BSLN_SNS_ID_OFFSET                     (620u)
#define CapSense_INV_BSLN_SNS_ID_SIZE                       (1u)
#define CapSense_INV_BSLN_SNS_ID_PARAM_ID                   (0x6F00026Cu)

#define CapSense_SHORTED_WDGT_ID_VALUE                      (CapSense_dsRam.selfTest.shortedWdgtId)
#define CapSense_SHORTED_WDGT_ID_OFFSET                     (621u)
#define CapSense_SHORTED_WDGT_ID_SIZE                       (1u)
#define CapSense_SHORTED_WDGT_ID_PARAM_ID                   (0x6900026Du)

#define CapSense_SHORTED_SNS_ID_VALUE                       (CapSense_dsRam.selfTest.shortedSnsId)
#define CapSense_SHORTED_SNS_ID_OFFSET                      (622u)
#define CapSense_SHORTED_SNS_ID_SIZE                        (1u)
#define CapSense_SHORTED_SNS_ID_PARAM_ID                    (0x6300026Eu)

#define CapSense_IDAC_GAIN_INDEX_VALUE                      (CapSense_dsRam.selfTest.idacGainIndex)
#define CapSense_IDAC_GAIN_INDEX_OFFSET                     (623u)
#define CapSense_IDAC_GAIN_INDEX_SIZE                       (1u)
#define CapSense_IDAC_GAIN_INDEX_PARAM_ID                   (0x6500026Fu)

#define CapSense_SNS_CLK_VALUE                              (CapSense_dsRam.selfTest.snsClk)
#define CapSense_SNS_CLK_OFFSET                             (624u)
#define CapSense_SNS_CLK_SIZE                               (2u)
#define CapSense_SNS_CLK_PARAM_ID                           (0xA1000270u)

#define CapSense_SNS_CAP_SNS_CLK_HZ_VALUE                   (CapSense_dsRam.selfTestConfig.snsCapSnsClkHz)
#define CapSense_SNS_CAP_SNS_CLK_HZ_OFFSET                  (628u)
#define CapSense_SNS_CAP_SNS_CLK_HZ_SIZE                    (4u)
#define CapSense_SNS_CAP_SNS_CLK_HZ_PARAM_ID                (0xEF000274u)

#define CapSense_SNS_CAP_SNS_CLK_DIVIDER_VALUE              (CapSense_dsRam.selfTestConfig.snsCapSnsClkDivider)
#define CapSense_SNS_CAP_SNS_CLK_DIVIDER_OFFSET             (632u)
#define CapSense_SNS_CAP_SNS_CLK_DIVIDER_SIZE               (2u)
#define CapSense_SNS_CAP_SNS_CLK_DIVIDER_PARAM_ID           (0xA3000278u)

#define CapSense_SNS_CAP_MOD_CLK_KHZ_VALUE                  (CapSense_dsRam.selfTestConfig.snsCapModClkKHz)
#define CapSense_SNS_CAP_MOD_CLK_KHZ_OFFSET                 (634u)
#define CapSense_SNS_CAP_MOD_CLK_KHZ_SIZE                   (2u)
#define CapSense_SNS_CAP_MOD_CLK_KHZ_PARAM_ID               (0xAF00027Au)

#define CapSense_SNS_CAP_MOD_CLK_DIVIDER_VALUE              (CapSense_dsRam.selfTestConfig.snsCapModClkDivider)
#define CapSense_SNS_CAP_MOD_CLK_DIVIDER_OFFSET             (636u)
#define CapSense_SNS_CAP_MOD_CLK_DIVIDER_SIZE               (2u)
#define CapSense_SNS_CAP_MOD_CLK_DIVIDER_PARAM_ID           (0xA200027Cu)

#define CapSense_SNS_CAP_VREF_VOLTAGE_VALUE                 (CapSense_dsRam.selfTestConfig.snsCapVrefVoltage)
#define CapSense_SNS_CAP_VREF_VOLTAGE_OFFSET                (638u)
#define CapSense_SNS_CAP_VREF_VOLTAGE_SIZE                  (2u)
#define CapSense_SNS_CAP_VREF_VOLTAGE_PARAM_ID              (0xAE00027Eu)

#define CapSense_VDDA_VREF_VOLTAGE_VALUE                    (CapSense_dsRam.selfTestConfig.vddaVrefVoltage)
#define CapSense_VDDA_VREF_VOLTAGE_OFFSET                   (640u)
#define CapSense_VDDA_VREF_VOLTAGE_SIZE                     (2u)
#define CapSense_VDDA_VREF_VOLTAGE_PARAM_ID                 (0xA0000280u)

#define CapSense_EXT_CAP_VREF_VOLTAGE_VALUE                 (CapSense_dsRam.selfTestConfig.extCapVrefVoltage)
#define CapSense_EXT_CAP_VREF_VOLTAGE_OFFSET                (642u)
#define CapSense_EXT_CAP_VREF_VOLTAGE_SIZE                  (2u)
#define CapSense_EXT_CAP_VREF_VOLTAGE_PARAM_ID              (0xAC000282u)

#define CapSense_VDDA_MOD_CLK_DIVIDER_VALUE                 (CapSense_dsRam.selfTestConfig.vddaModClkDivider)
#define CapSense_VDDA_MOD_CLK_DIVIDER_OFFSET                (644u)
#define CapSense_VDDA_MOD_CLK_DIVIDER_SIZE                  (1u)
#define CapSense_VDDA_MOD_CLK_DIVIDER_PARAM_ID              (0x69000284u)

#define CapSense_VDDA_VREF_GAIN_VALUE                       (CapSense_dsRam.selfTestConfig.vddaVrefGain)
#define CapSense_VDDA_VREF_GAIN_OFFSET                      (645u)
#define CapSense_VDDA_VREF_GAIN_SIZE                        (1u)
#define CapSense_VDDA_VREF_GAIN_PARAM_ID                    (0x6F000285u)

#define CapSense_VDDA_RESOLUTION_VALUE                      (CapSense_dsRam.selfTestConfig.vddaResolution)
#define CapSense_VDDA_RESOLUTION_OFFSET                     (646u)
#define CapSense_VDDA_RESOLUTION_SIZE                       (1u)
#define CapSense_VDDA_RESOLUTION_PARAM_ID                   (0x65000286u)

#define CapSense_VDDA_IDAC_DEFAULT_VALUE                    (CapSense_dsRam.selfTestConfig.vddaIdacDefault)
#define CapSense_VDDA_IDAC_DEFAULT_OFFSET                   (647u)
#define CapSense_VDDA_IDAC_DEFAULT_SIZE                     (1u)
#define CapSense_VDDA_IDAC_DEFAULT_PARAM_ID                 (0x63000287u)

#define CapSense_SNS_CAP_RESOLUTION_VALUE                   (CapSense_dsRam.selfTestConfig.snsCapResolution)
#define CapSense_SNS_CAP_RESOLUTION_OFFSET                  (648u)
#define CapSense_SNS_CAP_RESOLUTION_SIZE                    (1u)
#define CapSense_SNS_CAP_RESOLUTION_PARAM_ID                (0x6A000288u)

#define CapSense_SNS_CAP_VREF_GAIN_VALUE                    (CapSense_dsRam.selfTestConfig.snsCapVrefGain)
#define CapSense_SNS_CAP_VREF_GAIN_OFFSET                   (649u)
#define CapSense_SNS_CAP_VREF_GAIN_SIZE                     (1u)
#define CapSense_SNS_CAP_VREF_GAIN_PARAM_ID                 (0x6C000289u)

#define CapSense_BIST_CSD_SNS_CAP_ISC_VALUE                 (CapSense_dsRam.selfTestConfig.bistCsdSnsCapISC)
#define CapSense_BIST_CSD_SNS_CAP_ISC_OFFSET                (650u)
#define CapSense_BIST_CSD_SNS_CAP_ISC_SIZE                  (1u)
#define CapSense_BIST_CSD_SNS_CAP_ISC_PARAM_ID              (0x6600028Au)

#define CapSense_BIST_CSX_SNS_CAP_ISC_VALUE                 (CapSense_dsRam.selfTestConfig.bistCsxSnsCapISC)
#define CapSense_BIST_CSX_SNS_CAP_ISC_OFFSET                (651u)
#define CapSense_BIST_CSX_SNS_CAP_ISC_SIZE                  (1u)
#define CapSense_BIST_CSX_SNS_CAP_ISC_PARAM_ID              (0x6000028Bu)

#define CapSense_BIST_CSD_SH_CAP_ISC_VALUE                  (CapSense_dsRam.selfTestConfig.bistCsdShCapISC)
#define CapSense_BIST_CSD_SH_CAP_ISC_OFFSET                 (652u)
#define CapSense_BIST_CSD_SH_CAP_ISC_SIZE                   (1u)
#define CapSense_BIST_CSD_SH_CAP_ISC_PARAM_ID               (0x6B00028Cu)

#define CapSense_EXT_CAP_VREF_GAIN_VALUE                    (CapSense_dsRam.selfTestConfig.extCapVrefGain)
#define CapSense_EXT_CAP_VREF_GAIN_OFFSET                   (653u)
#define CapSense_EXT_CAP_VREF_GAIN_SIZE                     (1u)
#define CapSense_EXT_CAP_VREF_GAIN_PARAM_ID                 (0x6D00028Du)

#define CapSense_STARTUP_DELAY_VALUE                        (CapSense_dsRam.selfTestConfig.startupDelay)
#define CapSense_STARTUP_DELAY_OFFSET                       (654u)
#define CapSense_STARTUP_DELAY_SIZE                         (1u)
#define CapSense_STARTUP_DELAY_PARAM_ID                     (0x6700028Eu)

#define CapSense_FINE_INIT_TIME_VALUE                       (CapSense_dsRam.selfTestConfig.fineInitTime)
#define CapSense_FINE_INIT_TIME_OFFSET                      (655u)
#define CapSense_FINE_INIT_TIME_SIZE                        (1u)
#define CapSense_FINE_INIT_TIME_PARAM_ID                    (0x6100028Fu)

#define CapSense_SNS_SHORT_TIME_VALUE                       (CapSense_dsRam.selfTestConfig.snsShortTimeUs)
#define CapSense_SNS_SHORT_TIME_OFFSET                      (656u)
#define CapSense_SNS_SHORT_TIME_SIZE                        (1u)
#define CapSense_SNS_SHORT_TIME_PARAM_ID                    (0x6D000290u)

#define CapSense_TOUCHPAD0_SNS_CP0_VALUE                    (CapSense_dsRam.snsCp.touchpad0[0u])
#define CapSense_TOUCHPAD0_SNS_CP0_OFFSET                   (660u)
#define CapSense_TOUCHPAD0_SNS_CP0_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP0_PARAM_ID                 (0xEB000294u)

#define CapSense_TOUCHPAD0_SNS_CP1_VALUE                    (CapSense_dsRam.snsCp.touchpad0[1u])
#define CapSense_TOUCHPAD0_SNS_CP1_OFFSET                   (664u)
#define CapSense_TOUCHPAD0_SNS_CP1_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP1_PARAM_ID                 (0xE8000298u)

#define CapSense_TOUCHPAD0_SNS_CP2_VALUE                    (CapSense_dsRam.snsCp.touchpad0[2u])
#define CapSense_TOUCHPAD0_SNS_CP2_OFFSET                   (668u)
#define CapSense_TOUCHPAD0_SNS_CP2_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP2_PARAM_ID                 (0xE900029Cu)

#define CapSense_TOUCHPAD0_SNS_CP3_VALUE                    (CapSense_dsRam.snsCp.touchpad0[3u])
#define CapSense_TOUCHPAD0_SNS_CP3_OFFSET                   (672u)
#define CapSense_TOUCHPAD0_SNS_CP3_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP3_PARAM_ID                 (0xE50002A0u)

#define CapSense_TOUCHPAD0_SNS_CP4_VALUE                    (CapSense_dsRam.snsCp.touchpad0[4u])
#define CapSense_TOUCHPAD0_SNS_CP4_OFFSET                   (676u)
#define CapSense_TOUCHPAD0_SNS_CP4_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP4_PARAM_ID                 (0xE40002A4u)

#define CapSense_TOUCHPAD0_SNS_CP5_VALUE                    (CapSense_dsRam.snsCp.touchpad0[5u])
#define CapSense_TOUCHPAD0_SNS_CP5_OFFSET                   (680u)
#define CapSense_TOUCHPAD0_SNS_CP5_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP5_PARAM_ID                 (0xE70002A8u)

#define CapSense_TOUCHPAD0_SNS_CP6_VALUE                    (CapSense_dsRam.snsCp.touchpad0[6u])
#define CapSense_TOUCHPAD0_SNS_CP6_OFFSET                   (684u)
#define CapSense_TOUCHPAD0_SNS_CP6_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP6_PARAM_ID                 (0xE60002ACu)

#define CapSense_TOUCHPAD0_SNS_CP7_VALUE                    (CapSense_dsRam.snsCp.touchpad0[7u])
#define CapSense_TOUCHPAD0_SNS_CP7_OFFSET                   (688u)
#define CapSense_TOUCHPAD0_SNS_CP7_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP7_PARAM_ID                 (0xE00002B0u)

#define CapSense_TOUCHPAD0_SNS_CP8_VALUE                    (CapSense_dsRam.snsCp.touchpad0[8u])
#define CapSense_TOUCHPAD0_SNS_CP8_OFFSET                   (692u)
#define CapSense_TOUCHPAD0_SNS_CP8_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP8_PARAM_ID                 (0xE10002B4u)

#define CapSense_TOUCHPAD0_SNS_CP9_VALUE                    (CapSense_dsRam.snsCp.touchpad0[9u])
#define CapSense_TOUCHPAD0_SNS_CP9_OFFSET                   (696u)
#define CapSense_TOUCHPAD0_SNS_CP9_SIZE                     (4u)
#define CapSense_TOUCHPAD0_SNS_CP9_PARAM_ID                 (0xE20002B8u)

#define CapSense_TOUCHPAD0_SNS_CP10_VALUE                   (CapSense_dsRam.snsCp.touchpad0[10u])
#define CapSense_TOUCHPAD0_SNS_CP10_OFFSET                  (700u)
#define CapSense_TOUCHPAD0_SNS_CP10_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP10_PARAM_ID                (0xE30002BCu)

#define CapSense_TOUCHPAD0_SNS_CP11_VALUE                   (CapSense_dsRam.snsCp.touchpad0[11u])
#define CapSense_TOUCHPAD0_SNS_CP11_OFFSET                  (704u)
#define CapSense_TOUCHPAD0_SNS_CP11_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP11_PARAM_ID                (0xE20002C0u)

#define CapSense_TOUCHPAD0_SNS_CP12_VALUE                   (CapSense_dsRam.snsCp.touchpad0[12u])
#define CapSense_TOUCHPAD0_SNS_CP12_OFFSET                  (708u)
#define CapSense_TOUCHPAD0_SNS_CP12_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP12_PARAM_ID                (0xE30002C4u)

#define CapSense_TOUCHPAD0_SNS_CP13_VALUE                   (CapSense_dsRam.snsCp.touchpad0[13u])
#define CapSense_TOUCHPAD0_SNS_CP13_OFFSET                  (712u)
#define CapSense_TOUCHPAD0_SNS_CP13_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP13_PARAM_ID                (0xE00002C8u)

#define CapSense_TOUCHPAD0_SNS_CP14_VALUE                   (CapSense_dsRam.snsCp.touchpad0[14u])
#define CapSense_TOUCHPAD0_SNS_CP14_OFFSET                  (716u)
#define CapSense_TOUCHPAD0_SNS_CP14_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP14_PARAM_ID                (0xE10002CCu)

#define CapSense_TOUCHPAD0_SNS_CP15_VALUE                   (CapSense_dsRam.snsCp.touchpad0[15u])
#define CapSense_TOUCHPAD0_SNS_CP15_OFFSET                  (720u)
#define CapSense_TOUCHPAD0_SNS_CP15_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP15_PARAM_ID                (0xE70002D0u)

#define CapSense_TOUCHPAD0_SNS_CP16_VALUE                   (CapSense_dsRam.snsCp.touchpad0[16u])
#define CapSense_TOUCHPAD0_SNS_CP16_OFFSET                  (724u)
#define CapSense_TOUCHPAD0_SNS_CP16_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP16_PARAM_ID                (0xE60002D4u)

#define CapSense_TOUCHPAD0_SNS_CP17_VALUE                   (CapSense_dsRam.snsCp.touchpad0[17u])
#define CapSense_TOUCHPAD0_SNS_CP17_OFFSET                  (728u)
#define CapSense_TOUCHPAD0_SNS_CP17_SIZE                    (4u)
#define CapSense_TOUCHPAD0_SNS_CP17_PARAM_ID                (0xE50002D8u)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (732u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x630002DCu)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (733u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x650002DDu)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (734u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8C0002DEu)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (736u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8C0002E0u)

#define CapSense_SCAN_CSX_ISC_VALUE                         (CapSense_dsRam.scanCsxISC)
#define CapSense_SCAN_CSX_ISC_OFFSET                        (738u)
#define CapSense_SCAN_CSX_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSX_ISC_PARAM_ID                      (0x480002E2u)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (739u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x4E0002E3u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_VALUE              (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_TOUCHPAD0_PTR2WD_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_TOUCHPAD0_PTR2SNS_RAM_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_VALUE               (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_TOUCHPAD0_STATIC_CONFIG_VALUE              (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_VALUE              (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_TOUCHPAD0_TYPE_VALUE                       (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_TOUCHPAD0_TYPE_OFFSET                      (26u)
#define CapSense_TOUCHPAD0_TYPE_SIZE                        (1u)
#define CapSense_TOUCHPAD0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_TOUCHPAD0_NUM_COLS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_TOUCHPAD0_NUM_COLS_OFFSET                  (27u)
#define CapSense_TOUCHPAD0_NUM_COLS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_TOUCHPAD0_NUM_ROWS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numRows)
#define CapSense_TOUCHPAD0_NUM_ROWS_OFFSET                  (28u)
#define CapSense_TOUCHPAD0_NUM_ROWS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_ROWS_PARAM_ID                (0x5000001Cu)

#define CapSense_TOUCHPAD0_X_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].xResolution)
#define CapSense_TOUCHPAD0_X_RESOLUTION_OFFSET              (30u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_PARAM_ID            (0x9400001Eu)

#define CapSense_TOUCHPAD0_Y_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].yResolution)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_OFFSET              (32u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_PARAM_ID            (0x94000020u)

#define CapSense_TOUCHPAD0_X_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_TOUCHPAD0_X_CENT_MULT_OFFSET               (36u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_PARAM_ID             (0xDA000024u)

#define CapSense_TOUCHPAD0_Y_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_OFFSET               (40u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_PARAM_ID             (0xD9000028u)

#define CapSense_TOUCHPAD0_PTR2SNS_CP_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2SnsCpArr)
#define CapSense_TOUCHPAD0_PTR2SNS_CP_OFFSET                (44u)
#define CapSense_TOUCHPAD0_PTR2SNS_CP_SIZE                  (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_CP_PARAM_ID              (0xD800002Cu)

#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2CsxTouchpad)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_OFFSET          (48u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_PARAM_ID        (0xDE000030u)

#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_VALUE           (CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET          (52u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID        (0x58000034u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
