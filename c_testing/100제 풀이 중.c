#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1287 : 구구단을 *로 출력하기 - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < (i*n)+1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master