#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1169 : 나이로 연도와 성별 계산
	int age, year=2013;
	scanf("%d", &age);
	year = year-age;
	if(year<2000){ printf("%d 1", year%100); }
	else{ printf("%d 3", year%100); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master