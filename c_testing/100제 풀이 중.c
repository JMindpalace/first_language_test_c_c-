#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1275 : k 제곱 구하기 - 차후에 별도 함수 생성
	int n, sum = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		sum = sum*(n-i);
	}
	printf("%d", sum);

	// while(n!=0) { sum=sum*n; n--; }

	return 0;
}

// git add .
// git commit -m "
// git push origin master