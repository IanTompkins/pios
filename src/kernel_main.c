
//#include <stdio.h> //commented out for HW5 to make properly
#include "blinky.h"
#include "rprintf.h"
#include "serial.h"
int global;

#define NULL (void*)0; //added from Neil on Tuesday
int *mu_io_reg = 0x3F215040;

extern long __bss_start;
extern long __bss_end;


void clear_bss(){
	
	char * bssStart = &__bss_start;
	char * bssEnd = &__bss_end;
	for(int i = 0; i+(&__bss_start) < __bss_end; i++){
		(&__bss_start)[i] = 0;
	}
}


void kernel_main() {
	clear_bss();
	//led_init();//commented out for HW5
	int *mu_io_reg = 0x7E215040;
	*mu_io_reg = 'I'; //attempt to print IAN ????
	*mu_io_reg = 'A';
	*mu_io_reg = 'N';
	esp_printf(putc, "The memory location is %x", kernel_main); //added for serial port hw tuesday class
    while(1){
	//led_on(); //all commented out for HW5
	//delay(10);//arbitrary number for delay
	//led_off();
	//delay(10);
    }
}
