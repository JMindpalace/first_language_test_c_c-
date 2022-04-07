#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1212 : 삼각형 성립 조건
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b>c && a+c>b && b+c>a) // 3변 모두 등식 만족
		printf("yes");
	else
		printf("no");
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master

/*
	max = c>(a>b ? a : b) ? c : (a<b ? a : b);

	if(max==a) {
		if(b+c <= a) printf("no");
		else printf("yes");
	}
	else if(max==b) {
		if(a+c <= b) printf("no");
		else printf("yes");
	}
	else if(max==c){ // max==c
		if(b+a <= c) printf("no");
		else printf("yes");
	}
*/