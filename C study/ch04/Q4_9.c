#include <stdio.h>

int main(void) {
	for(int i = 0; i <= 8; i++) {
		printf("%d \t %d\n", i % 3 + 1, i / 3 + 1);
	}
	
	return 0;
}