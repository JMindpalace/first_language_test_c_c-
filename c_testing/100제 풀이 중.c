#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() { // 6 // 1475 : [기초-배열연습] 2차원 배열 지그재그 채우기 2-8

	int Arr[101][101], n, m, x=1;
	scanf("%d %d", &n, &m);

	for (int i = m, k=1; i >= 1; i--, k++) {
		if (k % 2 == 0) {
			for (int j = n; j >= 1; j--) {
				Arr[j][i] = x++;
			}
		}
		else {
			for (int j = 1; j <= n; j++) {
				Arr[j][i] = x++;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ", Arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master