#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1380 : 두 주사위의 합
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<7; i++){
		for(int j=1; j<7; j++){
			if(i+j==n){
				printf("%d %d\n", i, j);
			}
		}
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master