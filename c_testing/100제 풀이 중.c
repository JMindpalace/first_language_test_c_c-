#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1402 : 거꾸로 출력하기 3
{
	int n, a[1000];
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	for(int i=n-1; i>-1; i--){
		printf("%d ", a[i]);
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master