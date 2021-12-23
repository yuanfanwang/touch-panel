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

void print(char* msg) {
    UART_UartPutString(msg);
    UART_UartPutString("\r\n");
}

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

void getCapacitanceValueCSD(uint32 wid, uint32 sid) {
    char res[30];
    CapSense_TST_MEASUREMENT_STATUS_ENUM state;
    uint32 val = CapSense_GetSensorCapacitance(wid, sid, &state);
    sprintf(res, "%lu", val);
    UART_UartPutString(res);
    UART_UartPutString(" ");
}

void PrintAll(){
    getCapacitanceValueCSD(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON2_WDGT_ID, CapSense_BUTTON2_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON3_WDGT_ID, CapSense_BUTTON3_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON4_WDGT_ID, CapSense_BUTTON4_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON5_WDGT_ID, CapSense_BUTTON5_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON6_WDGT_ID, CapSense_BUTTON6_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON7_WDGT_ID, CapSense_BUTTON7_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON8_WDGT_ID, CapSense_BUTTON8_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON9_WDGT_ID, CapSense_BUTTON9_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON10_WDGT_ID, CapSense_BUTTON10_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON11_WDGT_ID, CapSense_BUTTON11_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON12_WDGT_ID, CapSense_BUTTON12_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON13_WDGT_ID, CapSense_BUTTON13_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON14_WDGT_ID, CapSense_BUTTON14_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON15_WDGT_ID, CapSense_BUTTON15_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON16_WDGT_ID, CapSense_BUTTON16_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON17_WDGT_ID, CapSense_BUTTON17_SNS0_ID);
    getCapacitanceValueCSD(CapSense_BUTTON18_WDGT_ID, CapSense_BUTTON18_SNS0_ID);
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