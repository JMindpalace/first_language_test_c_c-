#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef int Point[2];
typedef Point *PointPtr;

int main()
{
	Point p = { 3, 4};
	PointPtr pp = &p;

	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1] );
}

// git add .
// git commit -m "history"
// git push origin master