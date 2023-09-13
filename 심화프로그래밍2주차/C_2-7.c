#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double r;

	printf("반지름은 : ");
	scanf("%lf", &r);

	printf("원의 넓이는 %f입니다.\n", 3.14 * r * r);
	return 0;
}
