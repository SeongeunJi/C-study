#include <stdio.h>

int main(void) {
	int i = 5;
	int j = 0;
	
	j = i++; // j=5, i=6
	printf("i=%d, j=%d\n", i, j);
	
	i = 5;
	j = 0;
	j = ++i; // j=6 i = 6
	printf("i=%d, j=%d\n", i, j); 
	
}