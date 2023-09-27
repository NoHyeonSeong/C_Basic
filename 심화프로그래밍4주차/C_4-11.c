#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;
	int no;
	printf("양의 정수: ");
	scanf("%d", &no);
	while(i < no){
		if(i % 2 == 0){
			putchar('+');
		}
		else{
			putchar('-');
		}
		i++;
	}
	return 0;
}
