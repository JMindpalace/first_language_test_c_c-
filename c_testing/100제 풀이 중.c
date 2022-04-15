#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	// 1369 : 빗금 친 사각형 출력하기 - 생각 중
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= n+i; j++) { // n-i == " "
			if (j == n+i || j == n-i-1) { // (i-1)*2 == " "
				printf("*"); }
			else {
				printf(" "); }
		}
		printf("\n");
	}
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n+i; j++) {
			if (j == n+i-1 || j == n-i) {
				printf("*"); }
			else { 
				printf(" "); }
		}
		printf("\n");
	}


	return 0;
}

// git add .
// git commit -m "
// git push origin master