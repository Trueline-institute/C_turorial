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
        +  -  *   /  %   ++ --


        ++  - increment operator
        a = 10;
        a++;
        a =11;

        post increment
        pre increment

        a++; -----> post increment
        ++a;  -----> pre increment

        -- - decrement operator

        a = 10;
        a--;
        a = 9;

        a-- // 10
        --a  // 9



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

    printf("pre increment of a is %d\n", ++a);   // 21
    printf("post increment of a is %d\n", a++);  // 21  // 22
    printf("pre decerement of a is %d\n", --a);  // 21
    printf("post decerement of a is %d\n", a--); // 21

    printf("This is assignment operators....\n");
    printf(" +=  -=  *=  /=  %=\n");

    printf("%d is result of plus qual (+=) to operator\n", a += b); // a = a+b;
    printf("%d is result of minus eual (-=) to operator.\n", a -= b);
    printf("%d is result of multiplication or eual (*=) to operator.\n", a *= b); // a = a*b
    printf("%d is result of minus eual (/=) to operator.\n", b /= a);

    printf("This is comparison operators....\n");
    printf(" <  >   <=   >=   ==  !=  \n");

    int c = 30;
    int d = 40;
    /*
      True - 1
      False - 0
    */
    printf("less  than operator. c < d = %d\n", c < d);             // 1
    printf("greater than operator. c > d = %d\n", c > d);           // 0
    printf("less than or eual to c <= d %d\n", c <= d);             // 1
    printf("greater than or eual operator. c >= d = %d\n", c >= d); // 0
    printf("Equal to operator %d\n", c == d);                       // 0
    printf("Not qual to %d\n", c != d);                             // 1

    printf("This is Logical operators....\n");
    printf(" &&   ||  ! \n");

    printf("Logical and operator %d\n ", (c < d) && (c < d)); // 0
    printf("logical or operator %d\n", (c > d) || (c < d));   // 1
    printf("Logical not operator %d\n", !(c > d));            // 1
}