#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1365 : 사각형 출력하기 3  - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);
	// j==1 || i==1 || i==n || j==n || i==j || i==n-j+1 || n/2+1==i || n/2+1==j
	for (int i = 0; i < n; i++) { printf("*"); } printf("\n");

	for (int i = 2; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == (n - 2)/2 + 2) {
				printf("*");
			}
			else {
				if (j == 1 || j == n || j == n - i + 1 || j == i || j == n / 2 + 1)
				{ printf("*"); }
				else
				{ printf(" "); }
			}

		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) { printf("*"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master