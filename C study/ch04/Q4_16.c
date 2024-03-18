#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int rand1, rand2, sum = 0;
	srand((unsigned)time(NULL));
	
	do {
		
		rand1 = rand() % 6 + 1;
		rand2 = rand() % 6 + 1;
		sum += rand1 + rand2;
		printf("num1=%d, num2=%d\n", rand1, rand2);
		
	} while(rand1 == rand2);
	
	printf("sum=%d\n", sum);
	
	return 0;
}