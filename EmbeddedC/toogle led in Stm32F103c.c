/*
 * assignment.c
 *
 *  Created on: Dec 27, 2022
 *      Author: youssef's
 *      lecture 8_assignment 6_example 4
 */


typedef volatile unsigned int  vuint32_t;
#include <stdint.h>

#define RCC_BASE                  0x40021000
#define GPIOA_BASE                0x40010800
#define RCC_APB2ENR               *((vuint32_t *)(RCC_BASE + 0x18))
#define GPIOA_CRH                 *((vuint32_t *)(GPIOA_BASE + 0x04 ))
#define GPIOA_ODR                 *((vu cint32_t *)(GPIOA_BASE + 0x0C ))
#define RCC_IOPAEN                (1<<2)
#define GPIOA13                 (1<<13)


void main(){
	int i= 0;
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0X00200000;
	while(1){
		GPIOA_ODR |= GPIOA13;
		for(;i<5000;i++);
		GPIOA_ODR & = ~GPIOA13;
	}


}
