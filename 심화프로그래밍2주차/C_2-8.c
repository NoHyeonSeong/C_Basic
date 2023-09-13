#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double a, b;

	puts("2개의 실수를 입력하세요.");
	printf("실수 a : "); scanf("%lf", &a);
	printf("실수 b : "); scanf("%lf", &b);

	printf("a 값은 b의 %f%%입니다.\n", a / b * 100);

	return 0;
}
