#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1257 : 두 수 사이의 홀수 출력 - 차후에 별도 함수 생성
	int a, b;
	scanf("%d %d", &a, &b);

	if(a%2==0) a++;
	for (int i=a; i<=b; i+=2)
			printf("%d", i);

	return 0;
}

// git add .
// git commit -m "
// git push origin master