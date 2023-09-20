#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, d;

	puts("정수를 입력하세요.");
	printf("정수 A : ");	scanf("%d", &a);
	printf("정수 B : ");	scanf("%d", &b);
	printf("정수 C : ");	scanf("%d", &c);
	printf("정수 D : ");	scanf("%d", &d);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	printf("최댓값은 %d입니다.", max);
	return EXIT_SUCCESS;
}
