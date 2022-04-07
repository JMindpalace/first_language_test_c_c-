#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1174 : 30분전 (if문 없이)
	int h, m;
	scanf("%d %d", &h, &m);
	
	h += 24;
	m=(m + h * 60) -30;

	printf("%d %d", (m/60)%24, m%60);


	return 0;
}

// git add .
// git commit -m "
// git push origin master