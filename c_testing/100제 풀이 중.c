#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1351 : 구구단 출력하기 2 - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master