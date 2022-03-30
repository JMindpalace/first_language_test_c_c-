#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (i%3 == 0) { printf("* ", i); }
		else { printf("%d ", i); }
	}

	return 0;
}

// git add .
// git commit -m "history"
// git push origin master