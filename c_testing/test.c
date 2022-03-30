#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	scanf("%d", &a);
	while(a!=0) {
		printf("%d", a);
		a--;
	}

	return 0;
}

// git add .
// git commit -m "history"
// git push origin master