#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int a[7], m[6], cou = 0, bou = 0;

	for (int i = 0; i < 7; i++) { scanf("%d", &a[i]); }
	for (int i = 0; i < 6; i++) { scanf("%d", &m[i]); }

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[i] == m[j]) cou++;
		}
	}
	for (int i = 6; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[i] == m[j]) bou++;
		}
	}
	switch (cou) {
		case 6: {printf("1"); break; }
		case 5: {
			if(bou==1) printf("2");
			else printf("3");
			break; }
		case 4: {printf("4"); break; }
		case 3: {printf("5"); break; }
		default: printf("0");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master