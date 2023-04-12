// main.c
#include <stdio.h>
#include "engine.h"
#include "dashboard.h"
#include "communication.h"

int main(void) {
    engine_init();
    dashboard_init();
    communication_init();

    while (1) {
        engine_update();
        dashboard_update();
        communication_update();
    }

    return 0;
}
