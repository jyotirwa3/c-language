#include <stdio.h>

int main()
{
    int a = 12;
    int b = 4;
    printf("\n Arithmetic operator");
    printf("\n%d", (a + b));
    printf("\n%d", (a - b));
    printf("\n%d", (a * b));
    printf("\n%d", (a / b));
    printf("\n%d", (a % b));

    printf("\ncomparison operator");
    printf("\n%d", (a > b));
    printf("\n%d", (a < b));
    printf("\n%d", (a <= b));
    printf("\n%d", (a >= b));
    printf("\n%d", (a == b));
    printf("\n%d", (a != b));

    printf("\n relational operator");
    printf("\n%d", (a > b && a >= b)); //// both condition are true
    printf("\n%d", (a > b && a == b)); //// first condition are true, second false

    printf("\n%d", (a > b || a >= b)); //// both condition are true
    printf("\n%d", (a > b || a == b)); //// first condition are true, second false

    printf("\n%d", !(a > b || a >= b)); // 0

    int c = 12;
    c = 14;
    printf("\nC = %d", c);
    c = c + 1;
    c += 1;
    c++;
    ++c;
    printf("\nC = %d", c);

    int d = 10;
    ++d;
    printf("\nD = %d", d); // 11;
    d++;
    printf("\nD = %d", d);

    int e = 10;
    printf("\nE = %d", ++e); // 11
    printf("\nE = %d", e++); // 11

    printf("\nE = %d", ++e); // 13
    printf("\nE = %d", e++); // 13

    int a1 = 6;
    int b1 = 5;
    printf("\n%d", (a1++ * ++b1)); // 36

    int a2 = 6;
    int b2 = 5;
    a2++;
    ++b2;
    printf("\n%d", (a2 * b2)); // 42
    return 0;
}