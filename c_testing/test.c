#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= 2*i-1; j++) {
			printf("%d ", j);
		}
	printf("\n");
	}
	return 0;
}
// git add .
// git commit -m "history"
// git push origin master