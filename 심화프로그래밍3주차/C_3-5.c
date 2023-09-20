#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;

	puts("정수를 입력하세요.");
	printf("정수 A : ");	scanf("%d", &a);
	printf("정수 B : ");	scanf("%d", &b);

	if (a == b)
		puts("a와 b의 값은 같습니다.");
	else if (a > b)
		puts("a가 b보다 큽니다.");
	else
		puts("a가 b보다 작습니다.");


	return EXIT_SUCCESS;
}
