#include <stdio.h>
#define LEN 32

void printToBinary(int dec) {
	char bin[LEN] = {0};
	int pos = LEN;
	
	while(dec != 0) {
		bin[--pos] = dec & 1;
		dec >>= 1;
		dec &= 0x7fffffff;
	}
	
	for(int i = 0; i < LEN; i++) {
		printf("%d", bin[i]);
	}
	printf("\n");
}

int main(void) {
	int dec = 8;
	printf("%d >> %d = %4d \t", dec, 0, dec >> 0); printToBinary(dec >> 0);
	printf("%d >> %d = %4d \t", dec, 1, dec >> 1); printToBinary(dec >> 1);
	printf("%d >> %d = %4d \t", dec, 2, dec >> 2); printToBinary(dec >> 2);
	
	printf("%d << %d = %4d \t", dec, 0, dec << 0); printToBinary(dec << 0);
	printf("%d << %d = %4d \t", dec, 1, dec << 1); printToBinary(dec << 1);
	printf("%d << %d = %4d \t", dec, 2, dec << 2); printToBinary(dec << 2);
	
	dec = -8;
	printf("%d >> %d = %4d \t", dec, 0, dec >> 0); printToBinary(dec >> 0);
	printf("%d >> %d = %4d \t", dec, 1, dec >> 1); printToBinary(dec >> 1);
	printf("%d >> %d = %4d \t", dec, 2, dec >> 2); printToBinary(dec >> 2);
	
	printf("%d << %d = %4d \t", dec, 0, dec << 0); printToBinary(dec << 0);
	printf("%d << %d = %4d \t", dec, 1, dec << 1); printToBinary(dec << 1);
	printf("%d << %d = %4d \t", dec, 2, dec << 2); printToBinary(dec << 2);
	
	printf("\n");
	
	dec = 8;
	printf("%d >> %2d = %4d \t", dec, 0, dec >> 0); printToBinary(dec >> 0);
	printf("%d >> %2d = %4d \t", dec, 32, dec >> 32); printToBinary(dec >> 32);
	
	return 0;
}