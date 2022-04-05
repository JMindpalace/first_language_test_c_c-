#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1222 : 마지막 빼기 조건 추가
	int time, ac, bc, re;
	scanf("%d %d %d", &time, &ac, &bc);
	re = ((89 - time) / 5) + 1 + ac;

	if (re > bc) { printf("win"); }
	else if (re == bc) { printf("same"); }
	else { printf("lose"); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master