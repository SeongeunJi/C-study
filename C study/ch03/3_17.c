#include <stdio.h>

int main(void) {
	printf("10 == 10.0f ? %d\n", 10 == 10.0f); // 1
	printf("'0' == 0    ? %d\n", '0' == 0); // 0
	printf("'\\0' == 0  ? %d\n", '\0' == 0); // 1
	printf("'A' == 65   ? %d\n", 'A' == 65); // 1
	printf("'A' > 'B'   ? %d\n", 'A' > 'B'); // 0
	printf("'A' + 1 != 'B' %d\n", 'A'+1 != 'B'); // 0
	
	return 0;
}