#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1167 : 두 번째 수
	int year, gender;
	scanf("%d %d", &year, &gender);
	year = year / 10000;
	if (year >= 10) { year = 100 - year + 13; }
	else { year = 13 - year; }
	printf("%d", year);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master