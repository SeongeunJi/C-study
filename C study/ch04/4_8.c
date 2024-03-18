#include <stdio.h>

int main(void) {
	char regNo[15];
	
	printf("당신의 주민번호를 입력하세요. (011231-1111222) >");
	scanf("%s", regNo);
	
	switch(regNo[7]) {
		case '1': case'3': {
			printf("당신은 남자입니다.");
			break;
		}
		case '2': case'4': {
			printf("당신은 여자입니다.");
			break;
		}
		default:
			printf("등록되지 않은 주민번호입니다.");
			
	}
	
	return 0;
}