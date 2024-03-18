#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int rand_num = rand() % 100 + 1, input;
	
	do {
		printf("1과 100사이의 정수를 입력하세요.>");
		scanf("%d", &input);
		
		if(input < rand_num) {
			printf("더 큰 값으로 다시 시도해보세요.\n");
		} else if(input > rand_num) {
			printf("더 작은 값으로 다시 시도해보세요.\n");
		} else {
			printf("정답입니다.\n");
		}
	} while(rand_num != input);
	
	return 0;
}