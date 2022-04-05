#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1230 : 처음 충돌 터널 찾기
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a<=b && a<=c) {
		if(b<=c) printf("%d %d %d", a, b, c);
		else printf("%d %d %d", a, c, b);
	}
	else if (b<=a && b<=c) {
		if(a<=c) printf("%d %d %d", b, a, c);
		else printf("%d %d %d", b, c, a);
	}
	else {
		if(a<=b) printf("%d %d %d", c, a, b);
		else printf("%d %d %d", c, b, a);
	}
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master