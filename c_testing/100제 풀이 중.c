#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1260 : 3의 배수의 합 - 차후에 별도 함수 생성
	int a, b, sum=0;
	scanf("%d %d", &a, &b);

	for (int i=a; i<=b; i++){
		if(i%3==0){
			sum += i;
		}	
	}
	
	printf("%d", sum);

	return 0;
}

// git add .
// git commit -m "
// git push origin master