#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1228 : 비만도 측정 1 -- 표준몸무게 도입
	float a, b, c, d;
	scanf("%f %f", &a, &b);
	d = (a - 100)*0.9;
	c = ((b - d) * 100)/d;
	
	if (c <= 10.09) {
		printf("정상");
	}
	else if (c <= 20) {
		printf("과체중");
	}
	else {
		printf("비만");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master