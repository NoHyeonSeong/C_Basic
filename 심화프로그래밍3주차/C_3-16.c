#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int month;

	printf("몇 월인가요? ");	scanf("%d", &month);
	printf("%d월은 ", month);

	switch(month){
	case 3:
	case 4:
	case 5: puts("봄입니다."); break;
	case 6:
	case 7:
	case 8: puts("여름입니다."); break;
	case 9:
	case 10:
	case 11: puts("가을입니다."); break;
	case 12:
	case 1:
	case 2: puts("겨울입니다.");
	default: puts("없는 월입니다!!\a"); break;
	}
	return EXIT_SUCCESS;
}
