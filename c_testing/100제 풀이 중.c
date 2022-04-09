#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//1231 : 간단 계산기
	int a, b; char c;
	scanf("%d%c%d", &a, &c, &b);

	switch (c){
		case '+':{ printf("%d", a+b); break; }
		case '-':{ printf("%d", a-b); break; }
		case '*':{ printf("%d", a*b); break; }
		case '/':{ printf("%.2f", (float)a/b); break; }
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master