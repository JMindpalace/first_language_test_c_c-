#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1151 10보다 작은 수만 small 출력, 이상은 big 출력
	int a;
	scanf("%d", &a);
	if(a<10){ printf("small");}
	else { printf("big");}
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "
// git push origin master