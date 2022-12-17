/**
  ******************************************************************************
  * @file    main.c
  * @author  alanxinn
  * @version V1.0
  * @date    2022-12-17
  * @brief   USB相机硬触发及中断(未完善）
  ******************************************************************************
  * @attention
  *
  * 实验平台:启光 F103C8T6 STM32 开发板 
  * GITHUB  :https://github.com/alanxinn
  * EMAIL   :qq568622328@gmail.com
  *
  ******************************************************************************
  */ 

#include "stm32f10x.h"
#include "GW_Led.h"
#include "GW_Key.h"
#include "GW_Exti.h" 


/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */ 


int main(void)
{
	/*初始化LED端口*/
	LED_GPIO_Config();
	
	/*初始化KEY端口*/
	//Key_GPIO_Config();
	
	/*初始化外部中断端口*/
	EXTI_Key_Config();
	
	while(1)
	{
		/*if(Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN)==KEY_ON)
		{
			LED1_TOGGLE;	
		}*/
	}
}

