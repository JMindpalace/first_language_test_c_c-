#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void rec(int n) {
	if (n == 0) return;

	printf("%d", n);
	rec(n - 1);
	printf("%d", n);
}

int main() { // 4 // 함수 종합 - 3
	rec(5);

	return 0;
}

// git add .
// git commit -m "
// git push origin master