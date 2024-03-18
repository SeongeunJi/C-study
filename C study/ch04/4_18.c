#include <stdio.h>

int main(void) {
	int lines;
	
	printf("*을 출력할 라인의 수를 입력하세요.>");
	scanf("%d", &lines);
	
	for(int i = 1; i <= lines; i++) {
		for(int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}