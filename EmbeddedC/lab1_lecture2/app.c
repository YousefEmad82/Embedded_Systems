#include "UART.h"
unsigned char string_buffer[100] = "learn in depth";
void main(void){
	
	Uart_send_string(string_buffer);
}