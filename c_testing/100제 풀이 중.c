#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1403 : 배열 두번 출력하기
{
	int n, a[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for(int i=0; i<2; i++){
		for (int i = 0; i < n; i++) {
			printf("%d\n", a[i]);
		}
	}
	

	return 0;
}

// git add .
// git commit -m "
// git push origin master