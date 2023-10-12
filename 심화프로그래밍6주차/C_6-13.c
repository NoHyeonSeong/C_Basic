
#include <stdio.h>
#define NUMBER 5
#define FAILEN -1


int searchr(const int v[], int key, int n){
	int i;

	for(i = n -1; i >= 0; i--){
		if(v[i] == key){
			return i;
		}
	}
	return FAILEN;
}

int main(void) {
	int i, ky, idx;
	int vx[NUMBER];

	for(i = 0; i < NUMBER; i++){
		printf("vx[%d] : ", i);
		scanf("%d", &vx[i]);
	}
	printf("찾을 값 : ");
	scanf("%d", &ky);

	if((idx = searchr(vx, ky, NUMBER)) == FAILEN){
		puts("\a탐색에 실패했습니다.");
	}
	else{
		printf("%d은(는) %d번째에 있습니다.\n", ky, idx + 1);
	}

	return 0;
}

