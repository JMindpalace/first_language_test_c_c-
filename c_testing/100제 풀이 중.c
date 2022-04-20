#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 4 // 1445 : 정렬된 두 배열 합치기
{
	int n, m, a[2000], temp;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); }
	for (int i = n; i < n+m; i++) {
		scanf("%d", &a[i]); }

	for (int i = 0; i < n+m; i++) {
		for (int j = 0; j < n + m; j++) {
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i <= n+m; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master