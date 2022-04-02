#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10];

	for (int i = 0; i <= 9; i++) {
		printf("%d번째 수: ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 9; i >= 0; i--) {
		printf("%d번째 수: %d ", i, a[i]);
		printf("\n ");
	}
	return 0;
}

// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 팰린드롬수 || 2k-1

// git add .
// git commit -m "history"
// git push origin master