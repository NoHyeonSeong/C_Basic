#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int height;

	printf("키를 입력하세요 : ");
	scanf("%d", &height);

	printf("표준체중은 %.1f입니다.\n", (height -100) * 0.9);
	return 0;
}
