#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x : "); scanf("%d", &x);
	printf("정수 y : "); scanf("%d", &y);

	printf("x 값은 y값의 %d입니다.\n", 100 * x / y);

	return 0;
}
