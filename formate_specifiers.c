/*
Formate Specifiers.

- value output display print.

int         -       %d
float       -       %f
char        -       %c
double      -       %lf
*/

#include <stdio.h>

int main()
{
    int a = 123;
    float b = 9.89;
    char c = 'S';

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    int var1 = 87;
    float var2 = 45.89;
    char var3 = 'A';

    printf("The value of var1 is %d and The value of var2 is %f and The value of var3 is %c", var1, var2, var3);
}