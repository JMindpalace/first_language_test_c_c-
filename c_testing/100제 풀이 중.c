#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1280 : 홀수는 더하고 짝수는 빼고 2 - 차후에 별도 함수 생성
	int a, b, sum=0, max=0, min=0;
	scanf("%d %d", &a, &b);
	
	if(a>b){ max=a; min=b; }
	else{ max=b; min=a; } 

	for (int i=min; i <= max; i++) {
		if(i==min){
			if(i%2==0) {sum -= i; printf("%d", i); }
			else { sum += i; printf("%d", i);}
		}
		else{
			if(i%2==0) {sum -= i; printf("-%d", i); }
			else { sum += i; printf("+%d", i);}
		}
	}
	printf("=%d", sum);

	return 0;
}

// git add .
// git commit -m "
// git push origin master