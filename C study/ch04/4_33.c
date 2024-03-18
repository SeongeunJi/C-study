#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int num1, num2, sum = 0;
	
	roll_again: 
	num1 = rand() % 6 + 1;
	num2 = rand() % 6 + 1;
	
	sum += num1 + num2;
	
	printf("num1=%d, num2=%d\n", num1, num2);
	if(num1 == num2) goto roll_again;
	
	printf("sum=%d\n", sum);
	
	return 0;
}