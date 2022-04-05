#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1230 : 처음 충돌 터널 찾기
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a<=170) { printf("CRASH %d", a); }
	else if (b<=170) { printf("CRASH %d", b); }
	else if (c<=170) { printf("CRASH %d", c); }
	else { printf("PASS"); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master