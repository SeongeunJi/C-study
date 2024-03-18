#include <stdio.h>

int main(void) {
	int score;
	char grade = 'F';
	
	printf("Enter your score.>");
	scanf("%d", &score);
	
	if(score >= 90) {
		grade = 'A';
	} else if(score >= 80) {
		grade = 'B';
	} else if(score >= 70) {
		grade = 'C';
	}
	
	printf("당신의 학점은 %c입니다.\n", grade);
	
	return 0;
}