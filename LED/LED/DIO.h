#ifndef DIO_H
#define DIO_H

void DIO_vsetPINDIRECTION (unsigned char portName , unsigned char bitNumber , unsigned char direction);
void DIO_write(unsigned char portName , unsigned char pinNumber , unsigned char outputValue);
unsigned char DIO_u8read(unsigned char portName , unsigned char pinNumber);
void DIO_toggle(unsigned char portName , unsigned char pinNumber);
void DIO_write_port(unsigned char portName , unsigned char outputValue);
unsigned char DIO_portRead(unsigned char portName);
void DIO_set_port_direction(unsigned char portName , unsigned char direction);

#endif