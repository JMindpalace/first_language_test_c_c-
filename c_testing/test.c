#include <stdio.h>

int main()
{
    printf("%d %f %g %c\n", 1, 3.14, 3.14, 'a');

    int a = 1 , b = 2;
    int sum = a+b;
    
    printf("%d + %d = %d /n", a, b, a+b);
    printf("%d + %d = %d /n", a, b, sum);

    int aa;
    scanf("%d", &aa);


    return 0;
}

// git add .
// git commit -m "history"
// git push origin master