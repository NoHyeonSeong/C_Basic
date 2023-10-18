#include<stdio.h>
#include<limits.h>

int main(){
	printf("이 환경에서는 문자형은 %d비트로, 다음 범위의 값을 표현할 수 있습니다.\n", CHAR_BIT);
	printf("char             : %d~%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char      : %d~%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char    : %d~%d\n", 0, UCHAR_MAX);
	return 0;
}
