#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, no;
	printf("양의 정수 : ");
	scanf("%d", &no);

	if(no >= 1){
		while(no-- > 0){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
