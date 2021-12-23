/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"


/* show message with UART */
void print(char* msg) {
    UART_UartPutString(msg);
    UART_UartPutString("\r\n");
}

/* show the electrode status */
void getCapSenseState(CapSense_TST_MEASUREMENT_STATUS_ENUM state) {
    switch (state) {
        case CapSense_TST_MEASUREMENT_SUCCESS:
            print("SUCCESS");
            break;
        case CapSense_TST_MEASUREMENT_BAD_PARAM:
            print("BAD_PARAM");
            break;
        case CapSense_TST_MEASUREMENT_LOW_LIMIT:
            print("LOW_LIMIT");
            break;
        case CapSense_TST_MEASUREMENT_HIGH_LIMIT:
            print("HIGH_LIMIT");
            break;
        case CapSense_TST_MEASUREMENT_ERROR:
            print("ERROR");
            break;
        default:
            print("what?");
    }
}

/* detect the target electrode is shorted or not and show it with URAT */
void showElectrodeIsShorted(uint32 wid, uint32 sid) {
    CapSense_TST_MEASUREMENT_STATUS_ENUM stateParam;
    uint32 val = CapSense_GetSensorCapacitance(wid, sid, &stateParam);
    uint32 stateElectrode = CapSense_CheckIntegritySensorPins(wid, sid);
    getCapSenseState(stateParam);
    UART_UartPutString(" ");
    if (stateElectrode == CYRET_SUCCESS) UART_UartPutString("SUCCESS");
    else if (stateElectrode == CapSense_TST_SNS_SHORT) UART_UartPutString("SHORT");
    else UART_UartPutString("BAD");
    UART_UartPutString("\r\n");
}

/* show the capacitance value for the target electrode */
void getCapacitanceValueCSD(uint32 wid, uint32 sid) {
    char res[30];
    CapSense_TST_MEASUREMENT_STATUS_ENUM state;
    uint32 val = CapSense_GetSensorCapacitance(wid, sid, &state);
    sprintf(res, "%lu", val);
    UART_UartPutString(res);
    UART_UartPutString(" ");
}

void getCapacitanceValueCSDDam(uint32 wid, uint32 sid) {
    char res[30];
    CapSense_TST_MEASUREMENT_STATUS_ENUM state;
    uint32 val = CapSense_GetSensorCapacitance(wid, sid, &state);
}

/* show the capacitance value for all target electrode */
void PrintAll(){
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS0_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS1_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS2_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS3_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS4_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS5_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS6_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS7_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS8_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS9_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS10_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS11_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS12_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS13_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS14_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS15_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS16_ID);
//    getCapacitanceValueCSDDam(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_SNS17_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX0_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX1_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX2_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX3_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX4_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX5_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX6_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX7_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX8_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX9_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX10_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX11_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX12_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX13_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_RX14_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_TX0_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_TX1_ID);
    getCapacitanceValueCSD(CapSense_TOUCHPAD0_WDGT_ID, CapSense_TOUCHPAD0_TX2_ID);
    UART_UartPutString("\r\n");
}

int main(void)
{
    CyGlobalIntEnable;
    
    UART_Start();
    print("Start!");
    
    CapSense_Start();
    
    for(;;)
    {
        CapSense_ProcessAllWidgets();
        
        PrintAll();
        CyDelay(100);
        
        CapSense_ScanAllWidgets();
    }
}