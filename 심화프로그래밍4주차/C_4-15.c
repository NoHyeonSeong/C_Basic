#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, no;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &no);

	for(i = 1; i <= no; i++){
		printf("%d", i % 10);
	}
	putchar("\n");

	return 0;
}
