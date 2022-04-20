#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1 // 1440 : 비교
{
	int n, temp, a[10001];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master