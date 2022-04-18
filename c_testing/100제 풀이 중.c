#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1218 : 삼각형 판단하기
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double po = a*a + b*b;

	if (a+b > c) {
		if (a == b && b == c) {
			printf("정삼각형");
		}
		else if (a == b || b == c || a == c) {
			printf("이등변삼각형");
		}
		else if (po == c*c) {
			printf("직각삼각형");
		}
		else {
			printf("삼각형");
		}
	}
	else {
		printf("삼각형아님");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master