#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1162 : 1의 자리 구하기
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);
	result = (a + b + c)%1000;
	if (result == 0) { printf("대박"); }
	else { printf("그럭저럭"); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master