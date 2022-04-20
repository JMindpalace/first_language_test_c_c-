#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 8 // 1463 : [기초-배열연습] 2차원 배열 순서대로 채우기 1-4
{
	int n, pr;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		printf("%d ", i);
		pr = i;
		for (int j = 2; j < n+1; j++) {
			pr += n;
			printf("%d ", pr);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master