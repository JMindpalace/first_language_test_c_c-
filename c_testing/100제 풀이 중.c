#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);

	printf("%.1f MB", (((a*b*c*d)/1024)/1024)/8);
	return 0;
}

// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 팰린드롬수 || 2k-1

// git add .
// git commit -m "history"
// git push origin master