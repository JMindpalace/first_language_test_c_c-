#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 9 // 1464 : [기초-배열연습] 2차원 배열 순서대로 채우기 1-5
{
	int n, m, pr;
	scanf("%d %d", &n, &m);
	pr = n * m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", pr--);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master