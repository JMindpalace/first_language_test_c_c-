#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1214 : 이 달은 며칠까지 있을까?
{
	int y, m;
	scanf("%d %d", &y, &m);
	// day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	switch (m) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{ printf("31"); break; }
	case 4:
	case 6:
	case 9:
	case 11:
	{ printf("30"); break; }
	case 2:
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
			printf("29"); break;
		}
		else { printf("28"); }
	}
	// if ((y%4==0 && y%100!=0) || y%400==0) day[2]++; printf("%d ", day[m]);

	return 0;
}

// git add .
// git commit -m "
// git push origin master