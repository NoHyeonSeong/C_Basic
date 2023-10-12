
#include <stdio.h>

void mat_mul(const int a[4][3], const b[3][4], int c[4][4] ){
	int i, j, k;

	for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				c[i][j] = 0;
				for(k = 0; k < 3; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
}

int main(void) {
	int i, j;
	int mx[4][3];
	int my[3][4];
	int mz[4][4];

	printf("4행과 3열 mx와 3행 4열 my의 곱을 구합니다.\n");

	puts("a의 각 요소 값을 입력하세요.");
		for(i = 0; i < 4; i++){
			for(j = 0; j < 3; j++){
				printf("mx[%d][%d] : ", i, j);
				scanf("%d", &mx[i][j]);
			}
		}
	puts("행렬 my");

	for(i = 0; i < 3; i++){
			for(j = 0; j < 4; j++){
				printf("my[%d][%d] : ", i, j);
				scanf("%d", &my[i][j]);
			}
		}

	mat_mul(mx, my, mz);

	for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				printf("%4d", mz[i][j]);
			}
			putchar('\n');
		}

	return 0;
}

