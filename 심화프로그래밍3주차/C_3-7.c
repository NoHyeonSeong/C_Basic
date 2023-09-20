#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c;

	puts("정수를 입력하세요.");
	printf("정수 A : ");	scanf("%d", &a);
	printf("정수 B : ");	scanf("%d", &b);
	printf("정수 C : ");	scanf("%d", &c);

	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	printf("최솟값은 %d입니다.", min);
	return EXIT_SUCCESS;
}
