#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[21][21] = { 0 };
	scanf("%d", &n);

	for (int i = 1, b=0,c=0 ; i<n+1 ; i++) {
		scanf("%d %d", &b, &c);
		if(a[b][c] == 0) ++a[b][c];
	}

	for (int i = 1; i < 20 ; i++) {
		for (int j = 1; j < 20 ; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "history"
// git push origin master