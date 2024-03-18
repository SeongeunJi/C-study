#include <stdio.h>

int main(void) {
	int i;
	
	for(int i = 1; i <= 5; i++) {
		printf("%d\n", i);
	}
	
	for(int i = 1; i <= 5; i++) {
		printf("%d", i);
	}
	
	printf("\n");
	
	return 0;
}