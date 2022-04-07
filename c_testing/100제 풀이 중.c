#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1210 : 칼로리 계산
	int a, b, sum=0;
	scanf("%d %d", &a, &b);
	
	switch (a){
		case 1: {sum+=400; break;}
		case 2: {sum+=340; break;}
		case 3: {sum+=170; break;}
		case 4: {sum+=100; break;}
		case 5: {sum+=70; break;}
	}

	switch (b){
		case 1: {sum+=400; break;}
		case 2: {sum+=340; break;}
		case 3: {sum+=170; break;}
		case 4: {sum+=100; break;}
		case 5: {sum+=70; break;}
	}

	if(sum>500) printf("angry");
	else printf("no angry");

	return 0;
}

// git add .
// git commit -m "
// git push origin master