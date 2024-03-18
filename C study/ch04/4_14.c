#include <stdio.h>

int main(void) {
	int num = 1, sum = 0;
	
	while(num <= 10) {
		sum += num;
		printf("1부터 %2d까지의 합: %2d\n", num, sum);
		num++;
	}
	
	return 0;
}