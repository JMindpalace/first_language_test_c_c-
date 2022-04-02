#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[25] = { 0 }, t;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		scanf("%d ", &t);
		a[t]++;
	}
	for (int i = 1; i < 24; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "history"
// git push origin master