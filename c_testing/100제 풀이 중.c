#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1360 : 숫자 피라미드 2   - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("%d ", i);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master