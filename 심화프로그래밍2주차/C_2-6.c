#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double x;

	puts("실숫값을 입력하세요 : "); //printf로 해야 한줄에 입력이 됨
	scanf("%lf", &x);

	printf("당신은 %f이라 입력했군요.\n", x);

	return 0;
}
