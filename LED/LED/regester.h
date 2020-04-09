#ifndef REGESTER_H_

	#define my_DDRA *((volatile unsigned char*)(0x3A))
	#define my_PORTA *((volatile unsigned char*)(0x3B))
	#define my_PINA *((volatile unsigned char*)(0x39))

	#define my_DDRB *((volatile unsigned char*)(0x37))
	#define my_PORTB *((volatile unsigned char*)(0x38))
	#define my_PINB *((volatile unsigned char*)(0x36))

	#define my_DDRC *((volatile unsigned char*)(0x34))
	#define my_PORTC *((volatile unsigned char*)(0x35))
	#define my_PINC *((volatile unsigned char*)(0x33))

	#define my_DDRD *((volatile unsigned char*)(0x31))
	#define my_PORTD *((volatile unsigned char*)(0x32))
	#define my_PIND *((volatile unsigned char*)(0x30))

#endif
