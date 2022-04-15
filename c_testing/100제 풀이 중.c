#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1361 : 별 계단 만들기 - 차후에 별도 함수 생성
	int n, cou=0;
	scanf("%d", &n);

	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < i; j++)
		{ printf(" "); }
		printf("**\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master