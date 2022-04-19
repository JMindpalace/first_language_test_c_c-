#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1293 : 1등과 꼴등
{
	int n, s, max, min;
	scanf("%d", &n);

	scanf("%d", &s);
	max = s; min = s;

	for (int i = 1; i < n; i++) {
		scanf("%d", &s);
		if (s > max) { max = s; }
		if (s < min) { min = s; }
	}

	printf("%d %d", max, min);

	return 0;
}

// git add .
// git commit -m "
// git push origin master