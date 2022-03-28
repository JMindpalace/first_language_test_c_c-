#include <stdio.h>

int main()
{
    int a=0 , b=0;
    printf("숫자 1 입력 : \n");
    scanf("%d", &a);
    printf("숫자 2 입력 : \n");
    scanf("%d", &b);

    printf("두 숫자의 합은 %d입니다", a+b);

    return 0;
}

// git add .
// git commit -m "history"
// git push origin master