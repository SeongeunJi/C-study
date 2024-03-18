#include <stdio.h>

int main(void) {
	int num, sum = 0;
	
	printf("숫자를 입력하세요. (예:12345)>");
	scanf("%d", &num);
	
	while(num) {
		sum += num % 10;
		printf("sum=%3d num=%d\n", sum, num);
		num /= 10;
	}
	
	return 0;
}