
#include <stdio.h>

int scan_int(void){
	int temp;

	printf("정숫값 : ");
	scanf("%d", &temp);

	return temp;
}

int ave_of(int a, int b){
	return (a + b) / 2;
}

void hello(void){
	puts("안녕하세요.");
}
int main(void) {
	int n1 = scan_int();
	int n2 = scan_int();
	int n3 = scan_int();
	int ave;

	if((ave = ave_of(n1, n2)) == 0){
		printf("n1과 n2의 평균값은 0입니다.\n");
	}
	else if(ave > 0){
		printf("n1과 n2의 평균값은 양수로 %d입니다.\n", ave);
	}
	else{
		printf("n1과 n2의 평균값은 음수로 %d입니다.\n", ave);
	}


	if((ave = ave_of(n1, n3)) == 0){
			printf("n1과 n2의 평균값은 0입니다.\n");
		}
		else if(ave > 0){
			printf("n1과 n2의 평균값은 양수로 %d입니다.\n", ave);
		}
		else{
			printf("n1과 n2의 평균값은 음수로 %d입니다.\n", ave);
		}

	if((ave = ave_of(n2, n3)) == 0){
			printf("n1과 n2의 평균값은 0입니다.\n");
		}
		else if(ave > 0){
			printf("n1과 n2의 평균값은 양수로 %d입니다.\n", ave);
		}
		else{
			printf("n1과 n2의 평균값은 음수로 %d입니다.\n", ave);
		}
	return 0;
}
