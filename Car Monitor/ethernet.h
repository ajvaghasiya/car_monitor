//
//  ethernet.h
//  Car Monitor
//
//  Created by Akshay Vaghasiya
//

#ifndef _ETHERNET_H_
#define _ETHERNET_H_

#include <stdint.h>

/* Ethernet initialization function */
void ethernet_init(void);

/* Ethernet send packet function */
void ethernet_send_packet(uint8_t* data, uint32_t len);

/* Ethernet receive packet function */
void ethernet_receive_packet(uint8_t* data, uint32_t* len);

#endif /* _ETHERNET_H_ */
