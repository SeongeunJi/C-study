#include <stdio.h>
#define LEN 32

void printToBinary(int dec) {
	char bin[LEN] = {0};
	int pos = LEN;
	
	while(dec != 0) {
		bin[--pos] = dec & 1;
		dec = dec >> 1;
		dec = dec & 0x7fffffff; // 음수는 쉬프트 연산 시, 부호 유지함.
	}
	
	for(int i = 0; i < LEN; i++) {
		printf("%d", bin[i]);
	}
	printf("\n");
}

int main(void) {
	char p = 10;
	char n = -10;
	
	printf(" p  =%d \t", p); printToBinary(p); // 10
	printf("~p  = %d\t", ~p); printToBinary(~p); // -11
	printf("~p+1  = %d\t", ~p + 1); printToBinary(~p + 1); // -10
	printf("~~p  = %d\t", ~~p); printToBinary(~~p); //10
	printf("\n");
	printf(" n  =%d\n", n); // -10
	printf("~(n-1)=%d\n", ~(n-1)); // 10
	
	return 0;
}