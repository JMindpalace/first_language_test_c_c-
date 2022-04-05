#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1155 - 7의 배수 찾기 배수면 multiple 아니면 not 추가
	int a;
	scanf("%d", &a);

	if (a%7 == 0) { printf("multiple"); }
	else { printf("not multiple"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master