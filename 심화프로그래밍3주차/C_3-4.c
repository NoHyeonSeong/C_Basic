#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;

	printf("정수를 입력하세요 : "); scanf("%d", &num);

	if (num < 0)
		printf("절댓값은 %d입니다.", -num);
	else
		printf("절댓값은 %d입니다.", num);

	return EXIT_SUCCESS;
}
