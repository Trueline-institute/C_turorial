/*
Operator
    - special symbol which help to you do a
    mathemetical operation or calclulation.


    a  +  b =  value;

    a = operand
    b = operand
    + =  operator

    task perform = operation

    C programming operator types

    1. arithmetic operator.
        +  -  *   /  %


*/

#include <stdio.h>

int main()
{

    int a = 20;
    int b = 10;

    printf("This is arithmetic operators....\n");
    printf(" +  -  *  /  % \n\n");

    printf("The sum of a and b is %d\n", a + b);
    printf("The sub of a and b is %d\n", a - b);
    printf("The mul of a and b is %d\n", a * b);
    printf("The div of a and b is %d\n", a / b);
    printf("The mod of a and b is %d\n", a % b);
}