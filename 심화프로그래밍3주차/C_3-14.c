#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	puts("2개의 정수를 입력하세요.");
	printf("정수 A : ");	scanf("%d", &a);
	printf("정수 B : ");	scanf("%d", &b);

	if(a == b){
		puts("두 값은 같습니다.");
	}
	else{
		int min, max;
		if(a < b){
			min = a;
			max = b;
		}
		else{
			min = b;
			max = a;
		}
		printf("작은 값은 %d입니다.\n", min);
		printf("큰 값은 %d입니다.\n", max);

	}

	return EXIT_SUCCESS;
}
