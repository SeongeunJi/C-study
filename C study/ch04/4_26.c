#include <stdio.h>

int main(void) {
	int sum = 0, num = 0;
	
	while((sum += ++num) <= 100) {
		printf("%d - %d\n", num, sum);
	}
	
	return 0;
}