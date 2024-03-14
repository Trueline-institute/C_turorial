#include <stdio.h>

int main()
{

    printf("This programm is for value swapping..\n\n");

    int a = 10;
    int b = 20;

    printf("The befor swapping a is %d\n", a);
    printf("The befor swapping b is %d\n", b);

    printf("swaping task.....\n");

    int c;

    c = a; // c = 10;
    a = b; // a = 20;
    b = c; // b = 10;

    printf("The after swapping a is %d\n", a);
    printf("The after swapping b is %d\n", b);
}