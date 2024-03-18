#include <stdio.h>

int main(void) {
	char ch;

	printf("문자를 하나 입력하세요.>");
	scanf("%c", &ch);
	
	if('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z') {
		printf("입력하신 문자는 소문자입니다.");
	} else if('0' <= ch && ch <= '9') {
		printf("입력하신 문자는 숫자입니다.");
	}
	
	return 0;
}