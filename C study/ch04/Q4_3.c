#include <stdio.h>

int isPlusOpt(int score);
int isMinusOpt(int score);

int main(void) {
	int score;
	char grade = 'C';
	char opt = '0';
	
	printf("당신의 점수를 입력해주세요.>");
	scanf("%d", &score);
	
	if(score >= 90) {
		grade = 'A';
		if(isPlusOpt(score)) opt = '+';
		else if(isMinusOpt(score)) opt = '-';
	} else if(score >= 80) {
		grade = 'B';
		if(isPlusOpt(score)) opt = '+';
		else if(isMinusOpt(score)) opt = '-';
	}
	
	printf("당신의 학점은 %c%c입니다.\n", grade, opt);
	
	return 0;
	
}

int isPlusOpt(int score) {
	return score == 100 || score % 10 >= 8;
}
	
int isMinusOpt(int score) {		
	return score % 10 < 4;
}