#include "numbers.h"
int prime(int number)
{
    int flag=1, half, iteration ;
    half=number/2;
    for(iteration=2;iteration<=half;iteration++)
    {
      if(number%iteration==0)
      {
         flag=0;
         break;
      }
    }
    return flag;
}
int armstrong(int number)
{
   int reminder, sum=0, copy_number,flag;
   copy_number = number;
   while (number != 0)
   {
      reminder = number % 10;
      sum = sum + (reminder*reminder*reminder);
      number = number / 10;
   }
   if(sum==copy_number)
   {
       flag=1;
   }
   else
       flag=0;

    return flag;
}
int even_odd(int number)
{
    int flag;
    if(number%2 == 0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
        return flag;
}
int palindrome(int number)
{
    int remainder, reversed_number=0, copy_number,flag;
     copy_number=number;
     while (number != 0)
        {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
       }
     if(reversed_number==copy_number)
     {
         flag=1;
     }
     else
        {
            flag=0;
        }
        return flag;
}
int power(int number)
{
    int flag=1, copy_number;
    copy_number = number;
     while(copy_number!=1)
    {
        if(copy_number%2!=0){
            flag=0;
            break;
        }
        copy_number=copy_number/2;
    }
    return flag;
}

