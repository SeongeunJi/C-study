#include <stdio.h>
#define LEN 32


void printToBinary(int dec);


int main(void) {
	unsigned x = 0xAB;
	unsigned y = 0xF;
	
	printf("x = %#X \t\t\t", x); printToBinary(x);
	printf("y = %#X \t\t\t", y); printToBinary(y);
	
	printf("%#X | %#X = %#X \t\t", x, y, x | y); printToBinary(x | y);
	printf("%#X & %#X = %#X \t\t", x, y, x & y); printToBinary(x & y);
	printf("%#X ^ %#X = %#X \t\t", x, y, x ^ y); printToBinary(x ^ y);
	printf("%#X ^ %#X ^ %#X = %#X \t\t", x, y, y, x ^ y ^ y); printToBinary(x ^ y ^ y);
	
}

void printToBinary(int dec) {
	char bin[LEN] = {0};
	int pos = LEN;
	
	do {
		bin[--pos] = dec & 1;
		dec = dec >> 1;
	} while(dec != 0);
	
	for(int i = 0; i < LEN; i++) {
		printf("%d", bin[i]);
	}
	printf("\n");
}