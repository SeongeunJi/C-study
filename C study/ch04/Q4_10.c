#include <stdio.h>

int main(Void) {
	int i, j;
	
	for(i = 1; i <= 5; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 1; i <= 5; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
	
	return 0;
}