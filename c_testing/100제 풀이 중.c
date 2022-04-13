#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1281 : 홀수는 더하고 짝수는 빼고 3 - 차후에 별도 함수 생성
	int a, dit=0; // dit 대신 i로 대체 or 문자로 받아서 -> strlen(str)출력
	scanf("%d", &a);

	for (int i = 0; a > 0; i++) {
		a = a/10;
		dit++;
	}
	printf("%d", dit);

	return 0;
}

// git add .
// git commit -m "
// git push origin master