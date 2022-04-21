#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() // 6 // 1466 : [기초-배열연습] 2차원 배열 순서대로 채우기 1-7
{
	int n, m, pr;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
			pr = (n*m)-i;
		for (int j = 0; j < m; j++) {
			printf("%d ", pr);
			pr -=n;
		}
		printf("\n");
	}

	return 0;

// git add .
// git commit -m "
// git push origin master