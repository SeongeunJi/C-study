#include <stdio.h>

int main(void) {
	char input;
	
	printf("하나의 문자를 입력하세요.>");
	scanf("%c", &input);
	
	if('a' <= input && input <= 'z') {
		printf("소문자입니다.\n");
	} else if('A' <= input && input <= 'Z') {
		printf("대문자입니다.\n");
	} else if('0' <= input && input <= '9') {
		printf("숫자입니다.\n");
	} else {
		printf("숫자나 영문자가 아닙니다.\n");
	}
	
	return 0;
}