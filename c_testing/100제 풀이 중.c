#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//1261 : 10개의 수 중 5의 배수를 하나만 출력 - 차후에 별도 함수 생성
	int a[10], check=0;
	
	for (int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]%5 == 0) check ++;
	}
	
	if(check==0){
		printf("0");
	}
	else{
		for (int i=0; i<10; i++){
			if(a[i]%5 == 0) {
				printf("%d", a[i]);
				break;
			}
		}
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master