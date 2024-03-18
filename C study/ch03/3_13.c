#include <stdio.h>

int main(void) {
	double pi = 3.141592;
	double shortPi = (int)(pi * 1000 + .5) / 1000.;
	
	printf("%lf\n", shortPi);
	
	return 0;
}