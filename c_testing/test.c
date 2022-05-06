#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point{
	int x, y;

	void pswap() {
		int tem = x;
		x = y;
		y = tem;
	}
};

int main() // 종합연습문제 - 3
{
	Point pos = { 3, 4 };

	pos.pswap();

	printf("(%d, %d)\n", pos.x, pos.y);
}

// git add .
// git commit -m "history"
// git push origin master