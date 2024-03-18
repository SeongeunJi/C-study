#include <stdio.h>

int main(void) {
	long long a = 1000000 * 1000000;
	long long b = 1000000 * 1000000LL;
	
	printf("a=%lld, b=%lld\n", a, b);
}