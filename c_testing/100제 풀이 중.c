#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1160 : 일주일 중 아르바이트 날 구하기
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1:
	case 3:
	case 5:
		case 7:
		printf("oh my god");
		break;
	case 2:
	case 4:
	case 6:
		printf("enjoy");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master