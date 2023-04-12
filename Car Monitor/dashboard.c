//
//  dashboard.c
//  Car Monitor
//
//  Created by Akshay Vaghasiya
//

#include "dashboard.h"
#include "lcd.h"

static float dashboard_engine_speed = 0.0f;

void dashboard_init(void) {
/* TODO: Initialize LCD hardware and software */
}

void dashboard_update(void) {
/* Update LCD display with relevant information */
lcd_set_speed(dashboard_engine_speed);
lcd_set_fuel_level(get_fuel_level());
lcd_set_temperature(get_engine_temperature());
}

void dashboard_set_engine_speed(float speed) {
dashboard_engine_speed = speed;
}
