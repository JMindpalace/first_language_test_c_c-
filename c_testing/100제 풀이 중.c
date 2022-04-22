#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() { // 2 // 1471 : [기초-배열연습] 2차원 배열 지그재그 채우기 2-4

	int n, x = 1, a[100][100] = {0};
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < n; j++) {
				a[j][i] = x++;
			}
		}
		else {
			for (int j = n-1; j >= 0; j--) {
				a[j][i] = x++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master