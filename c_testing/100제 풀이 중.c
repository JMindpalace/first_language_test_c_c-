#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1367 : 평행사변형 출력하기 1 - 차후에 별도 함수 생성
	int n, cou = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--)
		{ printf(" "); }
		
		for (int j = 0; j<n; j++)
		{ printf("*"); }
		
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master