#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1167 : 두 번째 수
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) { // a>b>c // c>b>a
		if (b >= c) { printf("%d", b); }
		else { printf("%d", c); }
	}
	else if (a <= b && c >= a) { // a>c>b // b>c>a
		if (b <= c) { printf("%d", b); }
		else { printf("%d", c); }
	}
	else { // b>a>c c>a>b
		printf("%d", a);
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master