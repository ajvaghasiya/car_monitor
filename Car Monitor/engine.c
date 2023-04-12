//
//  engine.c
//  Car Monitor
//
//  Created by Akshay Vaghasiya 
//

#include "engine.h"
#include "pid.h"

static float engine_speed = 0.0f;
static float fuel_injection = 0.0f;

void engine_init(void) {
/* TODO: Initialize engine control hardware and software */
}

void engine_update(void) {
/* TODO: Read engine sensors */
float engine_rpm = get_engine_rpm();
float throttle_position = get_throttle_position();
    /* Control engine speed */
    float desired_engine_rpm = calculate_desired_engine_rpm(throttle_position);
    engine_speed = pid_control(engine_rpm, desired_engine_rpm);

    /* Control fuel injection */
    fuel_injection = calculate_fuel_injection(engine_speed);

    /* Update dashboard display */
    dashboard_set_engine_speed(engine_speed);
}

