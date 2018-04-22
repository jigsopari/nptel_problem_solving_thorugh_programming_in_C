#include<stdio.h>
int GCD_cal(int num1, int num2)
{
  while(num1!= num2)
  {
    if(num1 > num2)
      return GCD_cal(num1-num2, num2);
    else
      return GCD_cal(num1,num2-num1);
  }
  return num1;
}
int main()
{
  int num1, num2, gcd;
  scanf("%d",&num1); /*Enter 1st number */
  scanf("%d",&num2); /*Enter 1st number */

  gcd = GCD_cal(num1,num2);
  printf("The GCD of %d and %d is: %d\n",num1,num2,gcd);
  return 0;
}
