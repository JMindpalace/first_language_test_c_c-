#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1207 : 윷놀이
	int du, ga, gal, yu, sum;
	scanf("%d %d %d %d", &du, &ga, &gal, &yu);
	sum = du+ga+gal+yu;

	switch (sum){
		case 0:
			printf("모");
			break;
		case 1:
			printf("도");
			break;
		case 2:
			printf("개");
			break;
		case 3:
			printf("걸");
			break;
		case 4:
			printf("윷");
			break;
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master