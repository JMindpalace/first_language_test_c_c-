#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1268 : n개의 수 중 짝수의 개수 - 차후에 별도 함수 생성
	int a, b, sum=0;
	scanf("%d", &a);

	for (int i=0; i<a; i++){
		scanf("%d ", &b);
		if(b%2==0) sum ++;
	}
	printf("%d", sum);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master