#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1275 : k 제곱 구하기 - 차후에 별도 함수 생성
	int n, a, half=0;
	scanf("%d", &n);
	if(n%2==0) half = half/2;
	else half = half/2+1;

	for (int i = 1; i <= n; i++) {
		scnaf("%d", a);
		if(i==1 || i==half || i==n)
			printf("%d", a);
	}
	

	// while(n!=0) { sum=sum*n; n--; }

	return 0;
}

// git add .
// git commit -m "
// git push origin master