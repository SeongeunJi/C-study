#include <stdio.h>

int isPlus(int score) {
	return score % 10 >= 8 || score == 100;
}

int isMinus(int score) {
	return score % 10 < 4;
}

int main(void) {
	int score;
	char grade;
	char opt = '0';
	
	printf("점수를 입력하여 주십시오.>");
	scanf("%d", &score);
	printf("당신의 점수는 %d입니다.\n", score);
	
	if(score >= 90) {
		grade = 'A';
		if(isPlus(score)) opt = '+';
		else if(isMinus(score)) opt = '-';
	} else if(score >= 80) {
		grade = 'B';
		if(isPlus(score)) opt = '+';
		else if(isMinus(score)) opt = '-';
	} else {
		grade = 'C';
	}
	
	printf("당신의 학점은 %c%c입니다.\n", grade, opt);
	
	return 0;
}