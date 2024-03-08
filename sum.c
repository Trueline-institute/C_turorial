/*
Take a input Three value from user and give the sum of this three value.
*/

#include <stdio.h>

int main()
{

    int num1;
    int num2;
    int sum = 0;

    printf("Welcome to our calaculator.\n");

    printf("Enter a First value : ");
    scanf("%d", &num1);

    printf("Enter a second value : ");
    scanf("%d", &num2);

    sum = num1 * num2;

    printf("The sum of num1 and num2 is %d\n", sum);
}

/*

1. header file
2. pre-porcessor-directive
3. main function()
4. variable
5. statment & expression
6. comments
*/