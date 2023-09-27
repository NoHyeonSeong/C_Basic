#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no;
	printf("정수를 입력하세요 : ");	scanf("%d", &no);

	if(no > 0){
		while(no > 0){
			printf("%d ", no);
			no --;
		}
		printf("\n");
	}

	return 0;
}
