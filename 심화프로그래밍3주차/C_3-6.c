#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;

	puts("정수를 입력하세요.");
	printf("정수 A : ");	scanf("%d", &a);
	printf("정수 B : ");	scanf("%d", &b);

	puts("등가식의 값");
	printf("A == B인값 : %d\n", a == b);
	printf("A != B인값 : %d\n", a != b);

	puts("관계식의 값");
	printf("A > B인값 : %d\n", a > b);
	printf("A < B인값 : %d\n", a < b);
	printf("A >= B인값 : %d\n", a > b);
	printf("A <= B인값 : %d\n", a < b);

	return EXIT_SUCCESS;
}
