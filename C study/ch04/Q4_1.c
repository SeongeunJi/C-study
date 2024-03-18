#include <stdio.h>

int main(void) {
	int input;
	scanf("%d", &input);
	
	if(input % 2) {
		printf("홀수");
	} else {
		printf("짝수");
	}
	
	return 0;
}