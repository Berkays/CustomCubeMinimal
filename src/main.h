#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "stm32f0xx_hal.h"
#include "peripherals.h"

    void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

    void Error_Handler(void);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */