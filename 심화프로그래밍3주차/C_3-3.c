#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no;

	printf("정수를 입력하세요 : ");	scanf("%d", &no);

	if (no == 0)
		puts("이 수는 0입니다.");
	else if (no > 0)
		puts("이 수는 양수입니다.");
	else if (no < 0)
		puts("이 수는 음수입니다.");

	return EXIT_SUCCESS;
}
