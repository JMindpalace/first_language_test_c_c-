#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1406 : love 
{
	int n, sum = 0;
	scanf("%d", &n);

	// scanf("%1d", &a);
	for (int i = 0; i < 10; i++)
	{
		sum += n%10;
		n = n / 10;
	}

	if (sum % 7 == 4) { printf("suspect"); }
	else { printf("citizen"); }

	return 0;
}

// git add .
// git commit -m "
// git push origin master