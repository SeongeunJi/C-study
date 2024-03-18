#include <stdio.h>

int main(void) {
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= (i-1)*5; j++) {
			printf(" ");
		}
		printf("[%d,%d]\n", i, i);
	}
	return 0;
}