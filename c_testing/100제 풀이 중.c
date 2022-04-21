#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() // 7 // 1467 : [기초-배열연습] 2차원 배열 순서대로 채우기 1-8
{
	int n, m, pr;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		pr = (n*m)-n+i;
		for (int j = 0; j < m; j++) {
			printf("%d ", pr);
			pr -= n;
		}
		printf("\n");
	}

	return 0;

// git add .
// git commit -m "
// git push origin master