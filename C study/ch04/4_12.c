#include <stdio.h>

int main(void) {
	char regNo[15];
	printf("당신의 주민번호를 입력하세요. (011231-111122)>");
	scanf("%s", regNo);
	
	char gender = regNo[7];
	
	switch(gender) {
		case '1': case '3': {
			switch(gender) {
				case '1': {
					printf("당신은 2000년 이전에 출생한 남자입니다.\n");
					break;
				}
				case '3': {
					printf("당신은 2000년 이후에 출생한 남자입니다.\n");
				}
			}
			break;
		}
			
		case '2': case '4': {
			printf("error");
			switch(gender) {
				case '2': {
					printf("당신은 2000년 이전에 출생한 여자입니다.\n");
					break;
				}
				case '4': {
					printf("당신은 2000년 이후에 출생한 여자입니다.\n");
				}	
			}
		}	
	}
	
	return 0;
}