
#include <stdio.h>
#include "blinky.h"
int global;

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
	led_init();
    while(1){
	led_on();
	delay(10);//arbitrary number for delay
	led_off();
	delay(10);
    }
}
