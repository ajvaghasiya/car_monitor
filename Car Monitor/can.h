//
//  can.h
//  Car Monitor
//
//  Created by Akshay Vaghasiya
//

#ifndef _CAN_H_
#define _CAN_H_

/* CAN ID definitions */
#define ENGINE_STATUS_ID    0x100
#define GPS_DATA_ID         0x200
#define SENSOR_DATA_ID      0x300

/* CAN message structure */
typedef struct {
}
can_message_t;

/* CAN initialization function */
void can_init(void);

/* CAN send message function */
void can_send_message(can_message_t* msg);

/* CAN receive message function */
void can_receive_message(can_message_t* msg);

#endif /* _CAN_H_ */
