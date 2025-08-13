/*
 * main.c
 *
 *  Created on: Aug 13, 2025
 *      Author: TUF
 */
#include "stm32f767xx.h"

int main(void)
{
	return 0;
}

void EXTI0_IRQHandler(void)
{
	//handle the interrupt
	GPIO_IRQHandling(0);
}
