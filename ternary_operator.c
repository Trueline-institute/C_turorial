/*
ternary operator
   - use
     condtion check

   syntax :

    () ?  part-1(true) : part-2(false)
*/

#include <stdio.h>

int main()
{

    // int check;

    // printf("Enter the value for check : ");
    // scanf("%d", &check);

    // (check >= 18) ? printf("you can driving") : printf("you can not driving");

    int num;

    printf("Enter the any number for check even or odd.");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even number") : printf("Odd number");
}