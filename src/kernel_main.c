
#include <stdio.h>

extern long __bss_start;
extern long __bss_end;

//char *begin_bss = &__bss_start;
//char *end_bss = &__bss_end;



void clear_bss(){

	for(int i = 0; i+(&__bss_start) < __bss_end; i++){
		(&__bss_start)[i] = 0;
	}
}

void kernel_main() {

    while(1){
    }
}
