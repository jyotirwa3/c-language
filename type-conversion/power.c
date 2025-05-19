#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    int c,d;
    
    c = (a+b)*(a+b);
    printf("%d",c);

    d = (a * a) + (b * b) + (2 * a * b);
    printf("\n%d", d);
}