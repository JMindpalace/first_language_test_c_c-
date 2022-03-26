#include <stdio.h>

int main()
{
    printf("%d \n", 1);
    printf("%f \n", 3.14);
    printf("%g \n", 3.14);
    printf("%c \n", 'a');

    int a = 1;
    int b = 2;
    int sum = a+b;
    
    printf("%d + %d = %d /n", a, b, a+b);
    printf("%d + %d = %d /n", a, b, sum);




    return 0;
}

// git add .
// git commit -m "history"
// git push origin master