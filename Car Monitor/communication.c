//
//  communication.c
//  Car Monitor
//
//  Created by Akshay Vaghasiya
//
#include "communication.h"
#include "can.h"
#include "ethernet.h"

static uint8_t data_buffer[64];


void communication_init(void) {
/* TODO: Initialize CAN and Ethernet hardware and software */
}

void communication_update(void) {
/* Receive data from external devices */
if(can_receive(data_buffer, 64)) {
/* Process received data */
}
if(ethernet_receive(data_buffer, 64)) {
/* Process received data */
}
/* Send data to external devices */
if(can_send(data_buffer, 64)) {
    /* Process sent data */
}
if(ethernet_send (data_buffer, 64)) {
    /* Process sent data */
}
}
