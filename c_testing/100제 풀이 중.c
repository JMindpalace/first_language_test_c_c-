#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//1354 : 삼각형 출력하기 2  - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master