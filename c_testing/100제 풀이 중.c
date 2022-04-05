#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1161 : 결과를 홀수 짝수로 출력
	int a, b;
	scanf("%d %d", &a, &b);

	if(a%2==0){ printf("짝수+"); }
	else { printf("홀수+"); }

	if(b%2==0){ printf("짝수="); }
	else { printf("홀수="); }

	if((a+b)%2==0){ printf("짝수"); }
	else { printf("홀수"); }
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master