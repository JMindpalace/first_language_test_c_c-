#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() // 9 // 1469 : [기초-배열연습] 2차원 배열 지그재그 채우기 2-2
{
	int n, stan;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			stan = i * n;
			for (int j = 0, pr=stan; j < n; j++) {
				printf("%d ", pr--);
			}
			printf("\n");
		}
		else {
			for (int j = 0, pr = stan; j < n; j++) {
				printf("%d ", ++pr);
			}
			printf("\n");
		}
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master