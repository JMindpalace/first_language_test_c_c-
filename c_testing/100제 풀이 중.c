#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1272 : 기부 - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n%i==0) printf("%d ", i);
	}
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master