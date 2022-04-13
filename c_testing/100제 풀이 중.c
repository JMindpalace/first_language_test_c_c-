#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1286 : 최댓값, 최솟값 - 차후에 별도 함수 생성
	int min=10000, max=-10000, a;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if(a>max){ max = a; }
		if(a<min){ min = a; }
	}

	printf("%d\n%d", max, min);
	return 0;
}

// git add .
// git commit -m "
// git push origin master