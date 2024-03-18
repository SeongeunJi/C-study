#include <stdio.h>

int main(void) {
	int a = 5, b = 0;
	
	printf("a=%d, b=%d\n", a, b); // a=5, b=0
	printf("a!=0 || ++b = %d\n", a!=0 || ++b); // 1
	printf("a=%d, b=%d\n", a, b); // a=5, b=0
	printf("a==0 && ++b = %d\n", a==0 && ++b); // 0
	printf("a=%d, b=%d\n", a, b); // a=5, b=0
	
	return 0;
}