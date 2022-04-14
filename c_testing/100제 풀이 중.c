#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//1354 : 삼각형 출력하기 2  - 차후에 별도 함수 생성
	int n, skip=0;
	scanf("%d", &n);

	for (int i = n; i > 0; i--, skip--) {
		for (int j=0, jskip=skip; j < i; j++) {
			if(jskip<0){ printf("\n"); jskip++; }
			else { printf("*"); }
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master