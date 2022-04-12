#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1274 : 소수 판별 - 차후에 별도 함수 생성
	int n, cou=0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n%i==0) cou++;
	}
	
	if(cou==2){ printf("prime"); }
	else{ printf("not prime"); }

	/*
	for (int i = 2; i <n; i++) {
		if (n%i==0) { printf("not prime"); return 0;}
	}
	printf("prime");
	*/

	return 0;
}

// git add .
// git commit -m "
// git push origin master