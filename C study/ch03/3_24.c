#include <stdio.h>

int main(void) {
	int i = 3;
	char ch = 'C';
	
	printf("i=%d\n", i); // 3
	printf("!i=%d\n", !i); // 0
	printf("!!i=%d\n", !!i); // 1
	printf("!!!i=%d\n", !!!i); // 0
	printf("\n");
	
	printf("ch=%c\n", ch);
	printf("ch < 'a' || ch > 'z' = %d\n", ch < 'a' || ch > 'z');  // 1
	printf("!('a' <= ch && ch <= 'z')=%d\n", !('a' <= ch && ch <= 'z')); // 1
	printf("'a' <= ch && ch <= 'z'=%d\n", 'a' <= ch && ch <= 'z');// 0
	
	return 0;
}