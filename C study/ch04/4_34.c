#include <stdio.h>
#include <math.h>

int main(void) {
	int menu, num;
	
	while(1) {
		printf("(1) square\n");
		printf("(2) square root\n");
		printf("(3) log\n");
		printf("원하는 메뉴(1~3)를 선택하세요. (종료:0)>");
		scanf("%d", &menu);
		
		if(!menu) {
			break;
		}
		else if(!(1 <= menu && menu <= 3)) {
			printf("메뉴를 잘못 선택하셨습니다. (종료:0)\n");
			continue;
		}
		
		while(1) {
			printf("계산할 값을 입력하세요. (이전 메뉴:0, 전체종료:-1)>");
			scanf("%d", &num);
			
			if(num == -1) goto outer;
			else if(!num) break;

			
			switch(menu) {
				case 1: {
					printf("result=%d\n", num*num);
					break;
				}
				// case 2: {
				// 	printf("result=%lf\n", sqrt((double)num));
				// 	break;
				// }
				// case 3: {
				// 	printf("result=%lf\n", log((double)num));
				// 	break;
				// }
			}
		}
	}
	
	outer:
	printf("프로그램을 종료합니다.\n");
	return 0;
}