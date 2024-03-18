#include <stdio.h>

int main(void) {
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) {
			if(i + j != 6) {
				printf("%5c", ' ');
			} else {
				printf("[%d, %d]\n", i, j);
				break;
			}
		}
	}
	
	printf("\n");
	
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= i; j++) {
			printf("[%d,%d]", i, j);
		}
		printf("\n");
	}
	
	return 0;
}