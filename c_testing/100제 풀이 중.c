#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1180 : 휴지통 - 입력 수 10과 1자리 바꾸고 *2  && 50이상이하 멘트 출력
	int a, r;
	scanf("%d",&a);
	r = ((a%10 *10) + (a/10))*2;

	if (r >= 100) { r = r - 100; } // r = r%100;
	printf("%d\n", r);
	if (r > 50) { printf("OH MY GOD"); }
	else { printf("GOOD"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master