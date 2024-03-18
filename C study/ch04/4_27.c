#include <stdio.h>

int main(void) {
	int input, sum = 0;
	
	printf("합계를 구할 숫자를 입력하세요. (끝내려면 0을 입력)\n");
	
	while(input) {
		printf(">>");
		scanf("%d", &input);
		sum += input;
	}
	
	printf("합계:%d\n", sum);
	
	return 0;
}