#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 3 // 1442 : 선택(가장 작은 원소를 찾아 첫번째 위치로 옮기고, 남은 원소를 또 탐색) 정렬
{
	int n, temp, min, a[10001];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]); }

	for (int i = 1; i < n; i++) {
		min = i;
		for (int j = i+1; j <= n; j++) {
			if (a[j] < a[min]) { min = j; }
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", a[i]); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master