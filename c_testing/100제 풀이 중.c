#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1201 정수 판별
	int d;
	scanf("%d", &d);
	
	if(d==0){ printf("0");}
	else if(d>0){ printf("양수"); }
	else{ printf("음수"); }

	return 0;
}

// git add .
// git commit -m "
// git push origin master