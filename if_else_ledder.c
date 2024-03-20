/*

if_else_ledder use - multiple condition

syntax :

if(condition)
{
  // block of code
}else if(contion)
{
  // block of code
}else if(condition)
{
   // block of code
}else {
    // block of code
}

*/

#include <stdio.h>

int main()
{

    int value;

    printf("Enter any value for check weather : ");
    scanf("%d", &value);

    if (value > 0)
    {
        printf("This value is postive value.");
    }
    else if (value < 0)
    {
        printf("This value is nagative value.");
    }
    else
    {
        printf("This value is Zero");
    }

    return 0;
}