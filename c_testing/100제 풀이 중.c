#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1356 : 사각형 출력하기 2  - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);
	// i == 0 || i == n - 1 || j == 0 || j == n - 1
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0; j < n; j++) {
				printf("*");
			}

		}
		else {
			for (int j = 0; j < n; j++) {
				if (j == 0 || j == n - 1)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master