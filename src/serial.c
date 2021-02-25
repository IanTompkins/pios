#include "serial.h"

void putc(int data){
	int *mu_io_reg = 0x3F215004;
	*mu_io_reg = data;
}


