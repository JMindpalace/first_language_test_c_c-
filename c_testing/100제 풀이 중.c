#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1368 : 평행사변형 출력하기 2  - 차후에 별도 함수 생성
	int n, s_c; char a;
	scanf("%d %d %c", &n, &s_c, &a);

	for (int i = 0; i < n; i++) {
		if (a == 'L') {
			for (int j = 0; j < i; j++)
			{ printf(" "); }
		}
		else { // R
			for (int j = n; j > i; j--)
			{ printf(" "); }
		}
		for (int j = 0; j < s_c; j++)
		{ printf("*"); }
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master