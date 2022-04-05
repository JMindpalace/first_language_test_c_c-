#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1164 : 3개 조건 통과
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a<=170 || b<=170 || c<=170 ) { printf("CRASH"); }
	else { printf("PASS"); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master