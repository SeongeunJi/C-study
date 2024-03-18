#include <stdio.h>

int main(void) {
	int i = 11, j = 0;
	
	printf("Let's start countdown.");
	
	while(i--) {
		printf("%d\n", i);
		int j = 0;
		while(j++ < 2000000000)
			;
			
	}
	
	printf("GAME OVER");
	
	return 0;
}