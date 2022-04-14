#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1286 : 최댓값, 최솟값 - 차후에 별도 함수 생성
	int a, b;
	scanf("%d %d", &a, &b);

	for (int i=a; i<=b; i++){
		for(int j=1; j<10; j++){
			printf("%d*%d=%d\n", a,j,a*j);
		}
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master