#include <stdio.h>

int main(void) {
	int score;
	char grade = 'F';
	
	printf("Enter your score.>");
	scanf("%d", &score);
	
	switch(score / 5) {
		case 20: case 19: {
			grade = 'A';
			break;
		}
		case 18: {
			grade = 'B';
			break;
		}
		case 17: {
			grade = 'C'
			break;
		}
		case 16: {
			grade = 'D'
			break;
		}
	}
	
	printf("Your grade is %c\n", grade);
	
	return 0;
}