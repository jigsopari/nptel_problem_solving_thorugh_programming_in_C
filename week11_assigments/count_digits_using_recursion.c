#include<stdio.h>
int noOfDigits(int n)
{
  static int count=0;
  if(n > 0)
  {
    count++;
    noOfDigits(n/10);
  }
  else 
  {
    return count;
  }
}
int main()
{
  int n,digit;
   
    scanf("%d",&n); /*Enter Number of digits */

    digit = noOfDigits(n);

    printf("The number of digits in the number is :  %d\n",digit);
    return 0;
}
