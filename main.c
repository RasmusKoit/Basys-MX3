#include "headers/led.h"
#include "headers/lcd.h"
#include "headers/utils.h"
#include "stdbool.h"


int main(void){
    LED_Init();
    LCD_Init();
    LED_SetValue(7,1);
    LCD_WriteStringAtPos("tere", 0, 0);

    while(true){
        LCD_DisplayShift(-1);
        DelayAprox10Us(1000);
        
    }
    return 0;
}