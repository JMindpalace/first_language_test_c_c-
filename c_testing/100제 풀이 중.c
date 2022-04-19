#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1270 : 1의 개수는
{
	int n, cou=0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 10 == 1) { cou++; }
	}
	printf("%d\n", cou);

	return 0;
}

// git add .
// git commit -m "
// git push origin master