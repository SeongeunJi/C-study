#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	int result = 0;
	
	result = i = 3, i++, j++;
	printf("i = %d, j = %d, result = %d\n", i, j, result); // i = 4, j = 1, result = 3
	
	result = (i = 3, i++, j++);
	printf("i = %d, j = %d, result = %d\n", i, j, result); // i = 4, j = 2, result = 1
}