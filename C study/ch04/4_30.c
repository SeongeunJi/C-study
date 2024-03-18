#include <stdio.h>

int main(void) {
	int sum = 0, i = 0;
	
	while(sum += ++i) {
		if(sum > 100) break;
	}
	
	printf("i=%d\nsum=%d", i, sum);
	
	return 0;
}