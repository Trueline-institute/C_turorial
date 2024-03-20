/*


if -  keyword
use - condition check

syntax:

  if(condition)
  {
    // code (statment)
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
        printf("you can give vote.");
        printf("your age is %d so you can give vote indian goverment.", age);
    }

    printf("Thank you");
}