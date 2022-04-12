#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1269 : 수열의 값 구하기 - 차후에 별도 함수 생성
	int n, max, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i <n; i++) {
		scanf("%d", &max);
		if(sum<max){ sum = max;}
	}
	printf("%d", sum);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master