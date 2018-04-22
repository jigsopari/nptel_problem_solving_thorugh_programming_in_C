#include<stdio.h>
int factorial(int num)
{
  if(num == 0 || num == 1)
  {
    return 1;
    
  }
  else
  {
    return(num*factorial(num-1));
  }
}
int main()
{
    int num,f;
    scanf("%d",&num);/*Enter the number whose factorial to be found*/
    f=factorial(num); 
/*Write the factorial(num) function which calculates the function in recursive method and returns f */
    printf("Factorial of %d = %d",num,f);
    return 0;
}
