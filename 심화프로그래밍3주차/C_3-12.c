#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int point;
	printf("점수 : "); scanf("%d", &point);

	if(point > 100 || point < 0){
		puts("올바르지 않는 점수 입니다.");
	}
	else if(point <= 59){
		puts("불가");
	}
	else if(point <= 69){
		puts("가능");
	}
	else if(point <= 79){
		puts("양호");
	}
	else {
		puts("우수");
	}

	return EXIT_SUCCESS;
}
