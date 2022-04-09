#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int arr[10][10], n, m, sum = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master