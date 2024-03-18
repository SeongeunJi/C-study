#include <stdio.h>

int main(void) {
	int input, sum = 0, cnt = 0;
	
	printf("합계와 평균을 구할 숫자를 입력하세요.(종료시 0을 입력)\n");
	
	while(input) {
		printf(">>");
		scanf("%d", &input);
		sum += input;
		if(input) cnt++;
	}
	
	printf("합계:%d\n", sum);
	printf("평균:%lf\n", sum / (double)cnt);
	
	return 0;
}