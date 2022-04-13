#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1285 : 계산기 2 - 차후에 별도 함수 생성
	int a, sum = 0;

	scanf("%d", &sum);
	for (char c = 0; ; ) {
		scanf("%c", &c); if(c == '='){ printf("%d", sum); return 0; }
		scanf("%d", &a);

		if (c == '+') { sum += a; printf("+ %d\n", sum); }
		if (c == '-') { sum -= a; printf("- %d\n", sum); }
		if (c == '*') { sum *= a; printf("* %d\n", sum); }
		if (c == '/') { sum /= (float)a; printf("/ %d\n", sum); }

	return 0;
}

// git add .
// git commit -m "
// git push origin master