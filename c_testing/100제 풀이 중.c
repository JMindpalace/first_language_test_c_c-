#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	// 1203 : 비만도 측정 0 -- 비만 판단만하기
	int a;
	scanf("%d", &a);
	if(a <= 10){
	    printf("정상");
	}
	else if(a <= 20){
	    printf("과체중");
	}
	else{
	    printf("비만");
	}
	return 0;
}

// git add .
// git commit -m "
// git push origin master