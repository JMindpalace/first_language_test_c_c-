#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1440 : 비교
{
	int n, a[1000];
	scanf("%d", &n); // int a[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d: ", i+1);
		for (int j = 0; j < n; j++) {
			if (i==j) { continue; }

			if (a[i] > a[j]) { printf("> "); }
			else if (a[i] < a[j]) { printf("< "); }
			else { printf("= "); }
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master