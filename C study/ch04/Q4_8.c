#include <stdio.h>

int main(void) {
	int num = 1, sum = 1;
	
	while(num <= 10) {
		sum *= num;
		printf("1부터 %2d 까지의 곱: %2d\n", num++, sum);
	}
	
	return 0;
}