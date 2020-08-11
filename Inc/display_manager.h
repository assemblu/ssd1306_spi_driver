#ifndef __DISPLAY_MANAGER__
#define __DISPLAY_MANAGER__

#include "ssd1306.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

void display_init(void);
void display_clear(void);

// TESTS

void display_test_step_sequencer(uint32_t count);

#endif