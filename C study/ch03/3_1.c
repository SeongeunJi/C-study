#include <stdio.h>

int main(void) {
	int i;
	char ch;
	size_t i_size = sizeof (i);
	size_t int_size = sizeof (int);
	
	printf("i_size=%lu\n", i_size);
	printf("int_size=%lu\n", int_size);
	
	printf("sizeof(1.f)=%lu\n", sizeof (1.f));
	printf("sizeof(1.)=%lu\n", sizeof (1.));
	printf("sizeof(65)=%lu\n", sizeof (65));
	printf("sizeof('A')=%lu\n", sizeof ('A'));
	printf("sizeof(ch)=%lu\n", sizeof (ch));
	printf("sizeof(char)=%lu\n", sizeof (char));
	
	return 0;
}