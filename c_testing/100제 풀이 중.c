#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int n, a[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i += 2) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i += 2) {
		printf("%d ", a[i]);
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master