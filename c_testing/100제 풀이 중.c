#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 10 // 502 Bad Gateway -- nginx/1.21.0
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
}

// git add .
// git commit -m "
// git push origin master