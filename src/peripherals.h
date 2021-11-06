#ifndef Peripheral_H
#define Peripheral_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "stm32f0xx_hal.h"

    extern ADC_HandleTypeDef hadc;
    extern I2C_HandleTypeDef hi2c2;
    extern TIM_HandleTypeDef htim1;
    extern TIM_HandleTypeDef htim3;
    extern TIM_HandleTypeDef htim15;
    extern UART_HandleTypeDef huart2;

#ifdef __cplusplus
}
#endif
#endif