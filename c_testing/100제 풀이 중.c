#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int usecnt[5] = { 0, 0, 0, 0, 0 };
void useitem(int);

int main() { // 3 // 함수 종합 - 2
	useitem(4);
	useitem(2);
	useitem(1);
	useitem(4);
	useitem(0);
	
	for (int i = 0; i < 5; i++) {
		printf("슬롯%d의 아이템을 %d번 썼습니다, \n", i, usecnt[i]);
	}
	
	return 0;
}

void useitem(int itemnum) {
	usecnt[itemnum]++;
}

// git add .
// git commit -m "
// git push origin master