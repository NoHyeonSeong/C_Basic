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
//변수와 출력코드는는 같은 공간안에 있어야 제대로 작동한다.
