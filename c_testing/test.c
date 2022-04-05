#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d;
	scanf_s("%d",&a); // 17
	c = a / 10; // 1
	b = a % 10; // 7
	d = ((b*10)+c)*2; // 70+1 71
	if (d >= 100) { d=d-100; }
	printf("%d\n", d);
	if (d > 50) { printf("OH MY GOD"); }
	else { printf("GOOD"); }
}

// git add .
// git commit -m "history"
// git push origin master