#include <stdio.h>

int main(void) {
	for(int i = 1; i <= 100; i++) {
		int num = i;
		printf("i=%d ", i);
		
		do {
			if(!(num % 10 % 3) && num % 10)
				printf("짝");
		} while (num /= 10);
		
		printf("\n");
	}
	
	return 0;
}