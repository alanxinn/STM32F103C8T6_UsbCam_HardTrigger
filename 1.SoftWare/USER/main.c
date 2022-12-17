/**
  ******************************************************************************
  * @file    main.c
  * @author  alanxinn
  * @version V1.0
  * @date    2022-12-17
  * @brief   USB���Ӳ�������ж�(δ���ƣ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103C8T6 STM32 ������ 
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
  * @brief  ������
  * @param  ��
  * @retval ��
  */ 


int main(void)
{
	/*��ʼ��LED�˿�*/
	LED_GPIO_Config();
	
	/*��ʼ��KEY�˿�*/
	//Key_GPIO_Config();
	
	/*��ʼ���ⲿ�ж϶˿�*/
	EXTI_Key_Config();
	
	while(1)
	{
		/*if(Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN)==KEY_ON)
		{
			LED1_TOGGLE;	
		}*/
	}
}

