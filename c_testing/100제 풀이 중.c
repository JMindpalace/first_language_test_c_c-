#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1353 : 삼각형 출력하기 1  - 차후에 별도 함수 생성
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++) {
			printf("*");}
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master