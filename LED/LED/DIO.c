#include "std_macros.h"
#include "regester.h"


void DIO_vsetPINDIRECTION (unsigned char portName , unsigned char bitNumber , unsigned char direction){
	
	switch(portName){
		case 'a':
		case 'A':
			if(direction == 1){
				set_bit(my_DDRA,bitNumber);
			}
			else{
				clear_bit(my_DDRA,bitNumber);
			}
			break;
		case 'b':
		case 'B':
			if(direction == 1){
				set_bit(my_DDRB,bitNumber);
			}
			else{
				clear_bit(my_DDRB,bitNumber);
			}
			break;
		case 'c':
		case 'C':
			if(direction == 1){
				set_bit(my_DDRC,bitNumber);
			}
			else{
				clear_bit(my_DDRC,bitNumber);
			}
			break;
		case 'd':
		case 'D':
			if(direction == 1){
				set_bit(my_DDRD,bitNumber);
			}
			else{
				clear_bit(my_DDRD,bitNumber);
			}
			break;
		default:
			break;
	}
}


void DIO_write(unsigned char portName , unsigned char pinNumber , unsigned char outputValue){
	switch(portName){
		case 'A':
		case 'a':
			if(outputValue == 1){
				set_bit(my_PORTA,pinNumber);
			}
			else{
				clear_bit(my_PORTA,pinNumber);
			}
			break;
		case 'B':
		case 'b':
			if(outputValue == 1){
				set_bit(my_PORTB,pinNumber);
			}
			else{
				clear_bit(my_PORTB,pinNumber);
			}
			break;
		case 'C':
		case 'c':
			if(outputValue == 1){
				set_bit(my_PORTC,pinNumber);
			}
			else{
				clear_bit(my_PORTC,pinNumber);
			}
			break;
		case 'd':
		case 'D':
			if(outputValue == 1){
				set_bit(my_PORTD,pinNumber);
			}
			else{
				clear_bit(my_PORTD,pinNumber);
			}
			break;
		default:
			break;
	}
}

void DIO_write_port(unsigned char portName , unsigned char outputValue){
	switch(portName){
		case 'A':
		case 'a':
			my_PORTA = outputValue;
			break;
		case 'b':
		case 'B':
			my_PORTB = outputValue;
			break;
		case 'c':
		case 'C':
			my_PORTC = outputValue;
			break;
		case 'd':
		case 'D':
			my_PORTD = outputValue;
			break;
		default:
			break;
	}
}






