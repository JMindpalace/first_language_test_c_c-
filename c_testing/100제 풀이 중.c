#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1258 : 1부터 n까지 합 구하기 - 차후에 별도 함수 생성
	int n, sum=0;
	scanf("%d", &n);

	for (int i=0; i<=n; i+=2)
		sum += i;
	
	printf("%d", sum);

	return 0;
}

// git add .
// git commit -m "
// git push origin master