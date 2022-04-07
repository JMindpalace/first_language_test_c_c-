#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1166 : 윤년 판별
	int year;
	scanf("%d", &year);
	
	if ((year%4==0 && year%100!=0)||year%400==0) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master