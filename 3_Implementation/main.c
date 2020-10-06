#include "numbers.h"
enum characteristics{ PRIME=1, ARMSTRONG, EVEN_ODD, PALINDROME, POWER, EXIT };
int characteristics_available();
int characteristics(int);
int main()
{
   int result;
   printf("---------Discover the amazing characteristics of your number---------\n\n");
   while(1)
   {
       result=characteristics_available();
       if(result!=0)
       {
           characteristics(result);
       }
   }
}
int characteristics_available()
{
    int index;
    printf("Check whether your number is \n 1)Prime \n 2)Armstrong \n 3)Even/Odd \n 4)Palindrome\n ");
    printf("5)Power of 2 \n  6)Exit\n \n");
    printf("Enter the number associated with the characteristics you want to check\n");
    scanf("%d", &index);
    if(index==6)
    {
        printf("Exiting\n");
        return 0;
    }
    if(index>5 || index<1)
    {
       printf("Invalid index");
       return 0;
    }
    else
    return index;
}
int characteristics(int condition)
{
    int number,flag;
    if(condition!=5)
    {
    printf("Enter your number to be checked\n");
    scanf("%d", &number);
    if(number>0)
    {
    switch(condition)
    {
    case 1:
        flag=prime(number);
        if(flag==1)
        {
            printf("The number is a prime number\n\n");
        }
        else
        {
            printf("The number is not a prime number\n\n");
        }
        break;

    case 2:

        flag=armstrong(number);
        if(flag==1)
        {
            printf("The number is an armstrong number\n\n");
        }
        else
        {
            printf("The number is not an armstrong number\n\n");
        }
        break;

    case 3:
        flag=even_odd(number);
        if(flag==1)
        {
            printf("The number is an even number\n\n");
        }
        else
        {
            printf("The number is an odd number\n\n");
        }
        break;

    case 4:
        flag=palindrome(number);
        if(flag==1)
        {
            printf("The number is Palindrome\n\n");
        }
        else
        {
            printf("The number is Not Palindrome\n\n");
        }
        break;

    case 5:
        flag=power(number);
        if(flag==1)
        {
            printf("The number is Power of 2\n\n");
        }
        else
        {
            printf("The number is Not Power of 2\n\n");
        }
        break;

   
    }
    }
    }

          
}
