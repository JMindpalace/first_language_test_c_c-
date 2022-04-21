#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void pr(char *c) {
	for (int i = 0; c[i]!='\n' ; i++) {
		if(c[i] != ' ')
			printf("%c", c[i]);
	}
}

int main() { // 4 // 함수 종합 - 3
	pr("Hello, Wolrd!\n");
	pr("My name is kim\n");

	return 0;
}

// git add .
// git commit -m "
// git push origin master