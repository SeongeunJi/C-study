#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int rand_num = rand() % 100 + 1, input, cnt = 0;
	
	do {
		printf("1과 100사이의 정수를 입력하세요.>");
		scanf("%d", &input);
		cnt++;
		
		if(input > rand_num) {
			printf("더 작은 값으로 다시 시도해보세요.\n");
		} else if(input < rand_num) {
			printf("더 큰 값으로 다시 시도해보세요.\n");
		} else {
			printf("정답입니다.\n%d번 만에 맞추셨습니다.", cnt);
		}
		
	} while(rand_num != input);
}