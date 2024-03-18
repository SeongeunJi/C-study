#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int com, user;
	
	printf("가위(1), 바위(2), 보(3) 중 하나를 입력하세요.>");
	scanf("%d", &user);
	
	srand((unsigned)time(NULL));
	com = rand() % 3 + 1;
	
	printf("당신은 %d입니다.\n", user);
	printf("컴은 %d입니다.\n", com);
	
	switch(user - com) {
		case 1: case -2: {
			printf("당신이 이겼습니다.\n");
			break;
		}
		case 2: case -1: {
			printf("당신이 졌습니다.\n");
			break;
		} 
		case 0: {
			printf("비겼습니다.\n");
		}
	}
	
	return 0;
}