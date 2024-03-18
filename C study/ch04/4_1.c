#include <stdio.h>

int main(void) {
	int x = 0;
	
	printf("x = %d일 때, 참인 것은?\n", x);
	
	if (x == 0) printf("1");
	if (x != 0) printf("2");
	if (x) printf("3");
	if(!x) printf("4");
	
	x = 1;
	
	printf("x = %d일 때, 참인 것은?\n", x);
	
	if (x == 0) printf("1");
	if (x != 0) printf("2");
	if (x) printf("3");
	if(!x) printf("4");
	
	// 1, 4
	// 2, 3
}