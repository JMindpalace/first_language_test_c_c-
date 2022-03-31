#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, sum=0, b;
	scanf("%d", &a);

	for (int i; a>=sum ;i++) {
		sum+=i;
		i=b;
	}
	printf("%d", b);
	return 0;
}

// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 팰린드롬수 || 2k-1

// git add .
// git commit -m "history"
// git push origin master