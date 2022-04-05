#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1229 : 비만도 측정 2 -- 추가로 키 계산 도입
	double a, b, c, d;
	scanf("%lf %lf", &a, &b);
	if (a < 150) { d = a - 100; }
	else if (a < 160) { d = (a - 150)/2 +50; }
	else { d = (a - 100)*0.9; }
	
	c = ((b - d) * 100)/d;
	
	if (c <= 10.09) { printf("정상"); }
	else if (c <= 20) { printf("과체중"); }
	else { printf("비만"); }
	return 0;
}

// git add .
// git commit -m "
// git push origin master