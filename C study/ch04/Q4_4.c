#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	int user, com;
	char chArr[4][10] = {"", "가위", "바위", "보"};	
	
	printf("가위(1), 바위(2), 보(3) 중 하나를 입력하세요.>");
	scanf("%d", &user);
	
	srand((unsigned)time(NULL));
	com = rand() % 3 + 1;
	
	printf("당신은 %s입니다.\n", chArr[user]);
	printf("컴은 %s입니다.\n", chArr[com]);
	
	switch(user - com) {
		case -1: case 2: {
			printf("당신은 졌습니다.\n");
			break;
		}
		case 1: case -2: {
			printf("당신은 이겼습니다.\n");
			break;
		}
		case 0: {
			printf("비겼습니다.\n");
		}
	}
	
	return 0;
}