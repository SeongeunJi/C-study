#include <stdio.h>

int main(void) {
	int x;
	char ch;
	
	x = 15;
	printf("x=%2d일 때, 10 < x && x < 20 = %d\n", x, 10 < x && x < 20); // 1
	printf("x=%2d일 때, 10 < x < 20 = %d\n", x, 10 < x < 20); // 1
	
	x = 5;
	printf("x=%2d일 때, 10 < x < 20 = %d\n", x, 10 < x < 20); // 1
	
	x = 6;
	printf("x=%2d일 때, ", x);
	printf("x%%2==0 || x%%3==0 && x%%6!=0 = %d\n", x%2==0 || x%3==0 && x%6!=0); //1
	printf("x=%2d일 때, ", x);
	printf("(x%%2==0 || x%%3==0) && x%%6!=0 = %d\n", (x%2==0 || x%3==0) && x%6!=0); // 0
	
	ch = '1';
	printf("ch=%c일 때,", ch);
	printf("'0' <= ch && ch <= '9' = %d\n", '0' <= ch && ch <= '9'); // 1
	
	ch = 'a';
	printf("ch=%c일 때,", ch);
	printf("'a' <= ch && ch <= 'z' = %d\n", 'a' <= ch && ch <= 'z'); // 1
	
	ch = 'A';
	printf("ch=%c일 때,", ch);
	printf("'A' <= ch && ch <= 'Z' = %d\n", 'A' <= ch && ch <= 'Z'); // 1
	
	ch = 'q';
	printf("ch=%c일 때,", ch);
	printf("ch=='q' || ch=='Q' =%d\n", ch=='q' || ch=='Q'); // 1
	
	return 0;
}