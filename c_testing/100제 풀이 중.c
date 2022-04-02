#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[25], min;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d ", &a[i]);
		if (i==0) { min = a[0]; }
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d ", min);
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "history"
// git push origin master