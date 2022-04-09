#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1251 : 1~100출력 - 차후에 별도 함수 생성
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
		printf("%d ", i);

	return 0;
}

// git add .
// git commit -m "
// git push origin master