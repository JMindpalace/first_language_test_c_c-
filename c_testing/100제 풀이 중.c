#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1269 : 수열의 값 구하기 - 차후에 별도 함수 생성
	int a, b, c, d, sum = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	for (int i = 0; i < d; i++) {
		if (i == 0) { sum += a; continue;  }
		sum = a * b + c;
		a = sum;
	}
	// for(sum += a, i=1; i<d; i++) { sum = s*b+c; }
	printf("%d", sum);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master