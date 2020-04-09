#define F_CPU 8000000UL
#include "std_macros.h"
#include "regester.h"
#include <util/delay.h>
#include "DIO.h"

int main(void)
{
	int count = 0;
	DIO_vsetPINDIRECTION('A',0,1);
	DIO_vsetPINDIRECTION('A',1,1);
	DIO_vsetPINDIRECTION('A',2,1);

	while(1)
    {
		
		
		if(count%2 == 1){	
			DIO_write('a',0,1);
		}else{
			DIO_write('a',0,0);
		}
		
		
		if(count == 2 || count == 5 ||count == 8 || count == 11 ){				
			DIO_write('a',1,1);
		}else{
			DIO_write('a',1,0);
		}
		
		
		if(count ==3 || count == 7 || count ==11){
			DIO_write('a',2,1);
		}
		else{
			DIO_write('a',2,0);
		}
		_delay_ms(1000);
					
		if(count==11){
			count=-1;
		}
		count++;
	}
}

