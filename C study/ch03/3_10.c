#include <stdio.h>

int main(void) {
	char a = 'a';
	char d = 'd';
	
	char two = '2';
	char zero = '0';
	
	printf("'%c' - '%c' = %d\n", d, a, d - a);
	printf("'%c' - '%c' = %d\n", two, zero, two - zero);
	printf("'%c'=%d\n", a, a);
	printf("'%c'=%d\n", d, d);
	printf("'%c'=%d\n", zero, zero);
	printf("'%c'=%d\n", two, two);
	
	return 0;
}