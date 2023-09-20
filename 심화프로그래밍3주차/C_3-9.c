#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, diff;

	puts("정수를 입력하세요.");
	printf("정수A : ");	scanf("%d", &a);
	printf("정수B : ");	scanf("%d", &b);

	if (a > b)
		diff = a - b;
	else
		diff = b - a;

	printf("두 값의 차는 %d입니다.", diff);

	return EXIT_SUCCESS;
}
