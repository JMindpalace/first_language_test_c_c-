#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1158 : 정수 30이상 40이하 & 60이상 70이하
	int a;
	scanf("%d", &a);

	if ( (a>=30 && a<=40) || (a>=60 && a<=70) ) { printf("win"); }
	else { printf("lose"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master