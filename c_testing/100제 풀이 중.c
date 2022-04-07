#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1170 : 학년 반 번호 -- %[]d []에 -숫자면 좌측 +숫자면 우측 정렬
	int grade, class, num;
	scanf("%d %d %d", &grade, &class, &num);
	if(num<10)
		printf("%d%d0%d", grade, class, num);
	else
		printf("%d%d%d", grade, class, num);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master