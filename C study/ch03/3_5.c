#include <stdio.h>

int main(void) {
	int i = 5, j = 5;

	printf("i=%d\n", i++); // 5
	printf("j=%d\n", ++j); // 6
	printf("i=%d, j=%d\n", i, j); // 6 6
	
	return 0;
}