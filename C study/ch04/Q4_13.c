#include <stdio.h>

int main(void) {
	int num, count = 0;
	printf("정수를 입력하세요.>");
	scanf("%d", &num);
	
	while(num) {
		count++;
		num /= 10;
	}
	
	printf("%d자리 수입니다.", count);
	
	return 0;
}