/*

if - condition check (true)
else - otherwise (not check contion ) (when if is false)

syntax :

 if(condition)
 {
    // block od code
 }else{
    // block of code
 }

*/

#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("You can drive a car.");
    }
    else
    {
        printf("You can not drive a car.");
    }

    return 0;
}