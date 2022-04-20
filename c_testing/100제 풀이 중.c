#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 4 // 1443 : 삽입 정렬
{
	int n, j=0, temp, key, a[10001];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]); }

	for (int i = 2; i <= n; i++)
	{
		key = a[i];
		for (j = i - 1; j >= 1 && a[j] >= key; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = key;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", a[i]); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master