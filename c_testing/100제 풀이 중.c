#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1205 : 최댓값
{
	int a, b, min;
	scanf("%d %d", &a, &b);
	int sum = a + b, time = a * b;
	double powf = pow(a, b), powb = pow(b, a), max = 0;
	if (a > b) { min = a - b; }
	else { min = b - a; }

	if (sum > max) { max = sum; }
	if (time > max) { max = time; }	
	if (min > max) { max = min; }
	if (powf > max) { max = powf; }
	if (powb > max) { max = powb; }

	printf("%f", max);

	return 0;
}

// git add .
// git commit -m "
// git push origin master