#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1165 : 마지막 빼기!
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", ((89-a)/5)+1+b);
	// 마지막 90을 제외하는 건 (90-a%5) !=0  a++
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master