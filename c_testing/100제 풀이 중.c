#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int parity(int n) {
	// return (n%2 +2) %2;
	if (n % 2 == 0) { return 0; }
	else { return 1; }
}

int main() { // 10 // 100문 502 Bad Gateway -- nginx/1.21.0
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
	
	return 0;
}

// git add .
// git commit -m "
// git push origin master