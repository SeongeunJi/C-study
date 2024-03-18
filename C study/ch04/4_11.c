#include <stdio.h>

int main(void) {
	int x, y, finish = 0;
	char opt;
	double result;
	
	
	while(!finish) {
		
		printf("계산할 식을 입력하시오. (입력 예 3 + 4)>");
		scanf("%d %c %d", &x, &opt, &y);
		
		switch(opt) {
			case '+': {
				result = x + y;
				break;
			}

			case '-': {
				result = x - y;
				break;
			}

			case '*':
			case 'x': {
				result = x * y;
				break;
			}

			case '/': {
				if(y) {
					result = x / (double) y;
				} else {
					result = 0;
				}
				break;
			}
			
			default: {
				opt = '?';
			}
		}
	
		if(opt != '?') {
			if((int)result == result) {
				printf("%d %c %d = %d\n", x, opt, y, (int)result);
			} else {
				printf("%d %c %d = %lf\n", x, opt, y, result);
			}
		} else {
			printf("입력하신 연산자는 지원하지 않습니다.\n");
		}

		printf("끝내시려면 1을 입력하세요.>");
		scanf("%d", &finish);
	
	}
	
	return 0;
}