#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1156 : 홀수(odd) / 짝수(even)
	int a;
	scanf("%d", &a);

	if (a%2 == 0) { printf("even"); }
	else { printf("odd"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master