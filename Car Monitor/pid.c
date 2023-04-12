//
//  pid.c
//  Car Monitor
//
//  Created by Akshay Vaghasiya
//

#include "pid.h"

#define KP 0.5f
#define KI 0.2f
#define KD 0.1f

static float integral_error = 0.0f;
static float previous_error = 0.0f;

float pid_control(float measured_value, float desired_value) {
float error = desired_value - measured_value;
integral_error += error;
float derivative_error = error - previous_error;
previous_error = error;
    float output = KP * error + KI * integral_error + KD * derivative_error;
    return output;
}
