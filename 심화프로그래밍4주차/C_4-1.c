#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int retry;

	do{
		int no;
		printf("정수를 입력하세요 : ");
		scanf("%d", &no);

		if(no == 0){
			puts("이 수는 0입니다.");
		}
		else if(no > 0){
			puts("이 수는 양수 입니다.");
		}
		else{
			puts("이 수는 음수 입니다.");
		}

		printf("한 번 더? [Yes...0/No...9] : ");
		scanf("%d", &retry);
	}while(retry == 0);


	return 0;
}
