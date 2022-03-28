#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a, b;
	printf("숫자 1 입력 :"); scanf("%d", &a);
	printf("숫자 2 입력 : ");scanf("%d", &b);
	printf("두 숫자의 합은 %d입니다", a+b);


	float a_kg, b_m;
	printf("체중을 입력하세요 :"); scanf("%f", &a_kg);
	printf("키를 입력하세요 : "); scanf("%f", &b_m);
	printf("당신의 BMI는 %f입니다", a_kg / (pow(b_m, 2)));

    int nex;
	printf("알파벳을 입력하세요 :"); scanf("%d", &nex);
	printf("다음 알파벳은 %c입니다", nex+1);

	return 0;
}

// git add .
// git commit -m "history"
// git push origin master