#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int a=10, b=20;
	int *ptr;

	ptr=&a; *ptr=30;
	ptr=&b; *ptr=10;

	printf("%d\n", a); // 30
	printf("%d\n", b); // 10
	printf("%d\n", *ptr); // 10

	return 0;
}

// git add .
// git commit -m "
// git push origin master