#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1362 : 숫자 피라미드 3   - 차후에 별도 함수 생성
	int n, cou=0;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cou++;
		} } // v = n*(n+1)/2;
	
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < n-i; j++) {
			printf("%d ", cou--);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master