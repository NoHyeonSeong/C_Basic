#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);

	printf("이 두 값의 합은 %d이고 곱은 %d입니다.\n", a + b, a * b);

	return 0;
}
