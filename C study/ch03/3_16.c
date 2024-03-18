#include <stdio.h>

int main(void) {
	int x = 10, y = 8;
	
	printf("%3d %% %2d = %2d\n", x, y, x%y); // 2
	printf("%3d %% %2d = %2d\n", x, -y, x%-y); // 2
	printf("%3d %% %2d = %2d\n", -x, y, -x%y); // -2
	printf("%3d %% %2d = %2d\n", -x, -y, -x%-y); // -2
	
	return 0;
}