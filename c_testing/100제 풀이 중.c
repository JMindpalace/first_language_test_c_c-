#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1157 : 실수 50이상 60이하
	int a;
	scanf("%d", &a);

	if (a>50 && a<60) { printf("win"); }
	else { printf("lose"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master