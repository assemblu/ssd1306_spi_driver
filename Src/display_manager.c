#include "display_manager.h"

void display_init(void)
{
	ssd1306_Init();
	ssd1306_Fill(White);
	ssd1306_SetCursor(12, 18);
	ssd1306_WriteString("polseq", Font_16x26, Black);
	ssd1306_UpdateScreen();
	HAL_Delay(1000);
	ssd1306_SetCursor(18, 48);
	ssd1306_WriteString("initializing", Font_7x10, Black);
	ssd1306_UpdateScreen();
	HAL_Delay(1000);
}

void display_clear(void)
{
	ssd1306_Fill(Black);
	ssd1306_SetCursor(2, 0);
}

void display_test_step_sequencer(uint32_t count)
{
	ssd1306_Fill(Black);
	ssd1306_SetCursor(2, 0);
	ssd1306_WriteString("step: ", Font_11x18, White);
	ssd1306_SetCursor(42,26);
	ssd1306_WriteString(ssd1306_IntegerToString(count), Font_16x26, White);
	ssd1306_UpdateScreen();
	HAL_Delay(100);
}