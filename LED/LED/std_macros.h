#ifndef STDMACROS_H_
#define STDMACROS_H_
	#define set_bit(reg,bit) reg|=(1<<bit)
	#define clear_bit(reg,bit) reg&=(~(1<<bit))
	#define Toggle_bit(reg,bit) reg^=(1<<bit)
	#define READ_BIT(reg,bit) reg=((reg&(1<<bit))>>bit))
	#define IS_BIT_SET(reg,bit) ((reg&(1<<bit))>>bit)
	#define IS_BIT_CLEAR(reg,bit) !((reg&(1<<bit))>>bit)
#endif