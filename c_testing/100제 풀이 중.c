#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1154 : 큰수 - 작은수
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>=b){ printf("%d", a-b);}
	else { printf("%d", b-a);}
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "
// git push origin master