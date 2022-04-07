#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1224 : 분수 크기 비교
	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	if (a/b > c/d) // a*d > c*b
		printf(">");
	else if (a/b < c/d)
		printf("<");
	else
		printf("=");
	return 0;
}

// git add .
// git commit -m "
// git push origin master