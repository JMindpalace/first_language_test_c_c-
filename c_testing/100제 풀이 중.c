#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1204 : 배수(multiple) 표현
	int m , b;
	scanf("%d %d", &m, &b);
	
	if(m%b==0){ // b√m
		printf("%d*%d=%d", b, m/b, m);
	}
	else if(b%m==0){
		printf("%d*%d=%d", m, b/m, b);
	}
	else{ printf("none"); }

	return 0;
}

// git add .
// git commit -m "
// git push origin master