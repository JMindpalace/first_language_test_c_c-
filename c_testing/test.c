#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct { int x, y; } Point;

void pswap(Point *p) {
	Point tem = p->x;
	p->x = p->y;
	p->y = tem;
};

int main() // 종합연습문제 - 2 // 실행 안됨
{
	Point pos = { 3, 4 };

	pswap(&pos);

	printf("(%d, %d)\n", pos.x, pos.y);
}

// git add .
// git commit -m "history"
// git push origin master