#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1275 : k 제곱 구하기 - 차후에 별도 함수 생성
	int n, k, sum=1;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < k; i++) {
		sum = sum*n;
	}
	printf("%d", sum);

	return 0;
}

// git add .
// git commit -m "
// git push origin master