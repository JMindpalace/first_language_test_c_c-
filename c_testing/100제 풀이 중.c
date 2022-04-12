#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1272 : 기부 - 차후에 별도 함수 생성
	int k, h, cou = 0, sum = 0;
	scanf("%d %d", &k, &h);

	for (int i = 1, cha=0; cou < 2; i++) {
		if(i%2!=0){ cha++; }

		if (i == k || i == h) {
			if (i % 2 == 0) { sum = (cha *10)+sum; cou++; }
			else { sum += cha; cou++; }
		}
	}

	// if(k % 2 == 0){	sum += k * 5; } else{ sum += k / 2 + 1; }  -  

	printf("%d", sum);
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master