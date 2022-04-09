#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1253 : a~b 출력 - 차후에 별도 함수 생성
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a>b){
		for(int i=b; i<=a; i++)
			printf("%d ", i);
	}
	else{
		for(int i=a; i<=b; i++)
			printf("%d ", i);
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master