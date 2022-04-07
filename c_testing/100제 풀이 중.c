#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1171 : 학년 반 번호 -- 조건 분기 -- a&b c || a&b&c
	int grade, class, num;
	scanf("%d %d %d", &grade, &class, &num);

	if (class > 10) {
		if(num < 10) { printf("%d%d00%d", grade, class, num); }
		else if (num > 100) { printf("%d%d%d", grade, class, num); }
		else { printf("%d%d0%d", grade, class, num); }
	}
	else {
		if (num < 10) { printf("%d0%d00%d", grade, class, num); }
		else if (num > 100) { printf("%d0%d%d", grade, class, num); }
		else { printf("%d0%d0%d", grade, class, num); }
	}
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master

