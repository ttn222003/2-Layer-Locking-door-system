#ifndef	__KEYPAD_4X4_H__
#define	__KEYPAD_4X4_H__
#include "main.h"

/***** Define your Port and Pin here *****/
// Define port
#define R1_PORT	GPIOB
#define R2_PORT	GPIOB
#define R3_PORT	GPIOB
#define R4_PORT	GPIOB
#define C1_PORT	GPIOA
#define C2_PORT	GPIOA
#define C3_PORT	GPIOA
#define C4_PORT	GPIOA
// Define pin
#define R1_PIN	GPIO_PIN_12
#define R2_PIN	GPIO_PIN_13
#define R3_PIN	GPIO_PIN_14
#define R4_PIN	GPIO_PIN_15
#define C1_PIN	GPIO_PIN_0
#define C2_PIN	GPIO_PIN_1
#define C3_PIN	GPIO_PIN_2
#define C4_PIN	GPIO_PIN_3
/******************************************/
typedef struct{
	uint8_t button;
}KeyPad_4x4_t;

uint8_t readButton(void);
#endif
