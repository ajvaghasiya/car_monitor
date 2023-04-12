//
//  can.c
//  Car Monitor
//
//  Created by Akshay Vaghasiya on 11.04.23.
//

#include "can.h"
#include "stm32f4xx_hal.h"

CAN_HandleTypeDef hcan1;

void can_init(void) {
    CAN_FilterTypeDef filterConfig;

    /* CAN peripheral initialization */
    hcan1.Instance = CAN1;
    hcan1.Init.Mode = CAN_MODE_NORMAL;
    hcan1.Init.AutoBusOff = DISABLE;
    hcan1.Init.AutoWakeUp = DISABLE;
    hcan1.Init.AutoRetransmission = ENABLE;
    hcan1.Init.ReceiveFifoLocked = DISABLE;
    hcan1.Init.TimeTriggeredMode = DISABLE;
    hcan1.Init.TransmitFifoPriority = DISABLE;
    hcan1.Init.SyncJumpWidth = CAN_SJW_1TQ;
    hcan1.Init.TimeSeg1 = CAN_BS1_8TQ;
    hcan1.Init.TimeSeg2 = CAN_BS2_3TQ;
    hcan1.Init.Prescaler = 4;

    HAL_CAN_Init(&hcan1);

    /* CAN filter initialization */
    filterConfig.FilterBank = 0;
    filterConfig.FilterMode = CAN_FILTERMODE_IDMASK;
    filterConfig.FilterScale = CAN_FILTERSCALE_32BIT;
    filterConfig.FilterIdHigh = 0x0000;
    filterConfig.FilterIdLow = 0x0000;
    filterConfig.FilterMaskIdHigh = 0x0000;
    filterConfig.FilterMaskIdLow = 0x0000;
    filterConfig.FilterFIFOAssignment = CAN_FILTER_FIFO0;
    filterConfig.FilterActivation = ENABLE;

    HAL_CAN_ConfigFilter(&hcan1, &filterConfig);
}

void can_send_message(can_message_t* msg) {
    CAN_TxHeaderTypeDef txHeader;

    txHeader.StdId = msg->id;
    txHeader.RTR = CAN_RTR_DATA;
    txHeader.IDE = CAN_ID_STD;
    txHeader.DLC = msg->len;

    HAL_CAN_AddTxMessage(&hcan1, &txHeader, msg->data, NULL);
}

void can_receive_message(can_message_t* msg) {
    CAN_RxHeaderTypeDef rxHeader;

    HAL_CAN_GetRxMessage(&hcan1, CAN_RX_FIFO0, &rxHeader, msg->data);

    msg->id = rxHeader.StdId;
    msg->len = rxHeader.DLC;
}
