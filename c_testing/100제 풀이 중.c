#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1359 : 숫자 피라미드 1   - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i+1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master