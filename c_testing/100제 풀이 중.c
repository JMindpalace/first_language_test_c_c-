#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1369 : 빗금 친 사각형 출력하기 - 생각 중
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) { printf("*"); } printf("\n");

	for (int i = 1; i < n-1; i++) {
		for (int j=1; j <= n; j++) { // k k*2 k*3 < n
			if (j == 1 || j==n || j==k-1) {
				printf("*");
			}
			else {
				printf(" ");
			}
			k--;
		}
		printf(" %d \n", i);
	}

	for (int i = 0; i < n; i++) { printf("*"); } printf("\n");

	return 0;
}

// git add .
// git commit -m "
// git push origin master