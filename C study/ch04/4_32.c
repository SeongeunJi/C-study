#include <stdio.h>

int main(void) {
	int input = 0;
	
	do {
		printf("(1)square\n(2)square root\n(3)log\n원하는 메뉴(1~3)를 선택하세요. (종료:0)>");
		scanf("%d", &input);
		
		if(!input) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if(!(1 <= input && input <= 3)) {
			printf("메뉴를 잘못 선택하셨습니다.\n");
			continue;
		}
		
		printf("선택하신 메뉴는 %d번입니다.\n", input);
		
	} while(input);
}