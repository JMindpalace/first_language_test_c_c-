#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1279 : 홀수는 더하고 짝수는 빼고 1 - 차후에 별도 함수 생성
	int a, b, sum=0;
	scanf("%d %d", &a, &b);
	
	for (int i=a; i <= b; i++) {
		if(i%2==0) sum -= i;
		else sum += i;
	}
	printf("%d", sum);

	return 0;
}

// git add .
// git commit -m "
// git push origin master