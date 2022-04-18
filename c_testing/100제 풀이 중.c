#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1405 : 숫자 로테이션 ≒ 값 바꾸기
{
	int n, a[1000], b=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// for (j=i , g=1 ; g<=n; j++,g++) { if (j == n) j = 0; printf("%d ", a[j]); }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[j]);
			if (j == n -1 ) { b = a[0]; }
		}
		printf("\n");
		for (int j = 0; j < n; j++) {
			a[j] = a[j+1];
			if (j == n - 1) { a[j]=b; }
		}
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master