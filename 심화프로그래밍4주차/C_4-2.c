#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	int no, upper, lower;
	int sum = 0;

	printf("정수를 입력하세요 : ");	scanf("%d", &a);
	printf("정수를 입력하세요 : ");	scanf("%d", &b);

	if(a > b){
		lower = b;
		upper = a;
	}
	else if(b > a){
		lower = a;
		upper = b;
	}
	no = lower;
	do{
		sum = sum + no;
		no = no + 1;
	}while(no <= upper);

	printf("%d 이상 %d 이하의 모든 정수를 더한 값은 %d입니다.\n", lower, upper, sum);
	return 0;
}
