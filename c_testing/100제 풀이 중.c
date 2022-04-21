#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() // 8 // 1468 : [기초-배열연습] 2차원 배열 지그재그 채우기 2-1
{
	int n, pr;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			pr = (n*i)-n+1;
			for (int j = 1; j <= n; j++) {
				printf("%d ", pr++);
			}
			printf("\n");
		}
		else {
			pr = n * i;
			for (int j = 0; j < n; j++) {
				printf("%d ", pr--);
			}
			printf("\n");
		}
	}

	return 0;

// git add .
// git commit -m "
// git push origin master