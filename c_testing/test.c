#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (a%i == 0) { printf("%d\n", i); }
	}

	return 0;
}

// git add .
// git commit -m "history"
// git push origin master