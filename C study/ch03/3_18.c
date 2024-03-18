#include <stdio.h>

int main(void) {
	float f = .1f;
	double d = .1;
	double d2 = (double) f;
	
	printf("10. == 10.f ? %d\n", 10. == 10.f); // 1
	printf(".1 == .1f   ? %d\n", .1 == .1f); // 0
	printf("f = %19.17f\n", f);
	printf("d = %19.17lf\n", d);
	printf("d2 = %19.17lf\n", d2);
	printf("d==f  ? %d\n", d==f); // 0
	printf("d==d2 ? %d\n", d==d2); // 0
	printf("d2==f ? %d\n", d2==f); // 1
	printf("(float)d==f ? %d\n", (float)d==f); // 0
	
	return 0;
}