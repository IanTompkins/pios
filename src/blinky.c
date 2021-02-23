unsigned int *gpset1 = 0xfe20020;
unsigned int *gpclr1 = 0xfe2002c;
unsigned int *gpsel4 = 0xfe20010;

void led_init(){
	unsigned int bit_mask = 0xfffffe3f;
	*gpsel4 = *gpsel4 & bit_mask;
	*gpsel4 = *gpsel4 | (1 << 6);
	return;
}

void led_on(){
	*gpset1 = (1 << 10);


}

void led_off(){
	*gpclr1 = (1 << 10);


}
//delay function built by Neil
void delay(unsigned int d){
	unsigned int i, j;

	for(i = 0; i < 0x7f; i++){
		for(j = 0; j < d; j++){
			asm("nop");
		}
	}

}
