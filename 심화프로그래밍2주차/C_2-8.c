#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1, n2;
		double d1, d2;

		puts("정수롸 실수를 2개씩 입력하세요.");
		printf("정수 n1 : "); scanf("%d", &n1);
		printf("정수 n2 : "); scanf("%d", &n2);
		printf("정수 d1 : "); scanf("%lf", &d1);
		printf("정수 d2 : "); scanf("%lf", &d2);

		printf("5 * 2 = %d\n", 5 * 2);
		printf("5 / 2 = %d\n", 5 / 2);
		printf("5 * n1 = %d\n", 5 * n1);
		printf("5 / n1 = %d\n", 5 / n1);
		printf("n1 * n2 = %d\n", n1 * n2);
		printf("n1 / n2 = %d\n", n1 / n2);

		printf("5 * 2.5 = %f\n", 5 * 2.5);
		printf("5 / 2.5 = %f\n", 5 / 2.5);
		printf("5 * d1 = %f\n", 5 * d1);
		printf("5 / d1 = %f\n", 5 / d1);
		printf("d1 * d2 = %f\n", d1 * d2);
		printf("d1 / d2 = %f\n", d1 / d2);

		printf("5.3 * 2.5 = %f\n", 5.3 * 2.5);
		printf("5.3 / 2.5 = %f\n", 5.3 / 2.5);
		printf("5.3 * d1 = %f\n", 5.3 * d1);
		printf("5.3 / d1 = %f\n", 5.3 / d1);
		printf("d1 * d2 = %f\n", d1 * d2);
		printf("d1 / d2 = %f\n", d1 / d2);

	return 0;
}
