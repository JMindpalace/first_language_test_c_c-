#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 6 // 1461 : [기초-배열연습] 2차원 배열 순서대로 채우기 1-2
{
	int n, pr;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		pr = n*i;
		for (int j = n; j > 0; j--) {
			printf("%d ", pr--);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master