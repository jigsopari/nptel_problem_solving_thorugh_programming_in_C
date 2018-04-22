#include <stdio.h>

int fsum(int *no1, int *no2)
{
  int sum=0;
  sum=*no1 + *no2;
  
  return sum;
}
int main()
{
   int no1, no2, sum;
 
   //printf(" Input the first number : ");
   scanf("%d", &no1);
   //printf(" Input the second  number : ");
   scanf("%d", &no2);   
 
 
   printf("The sum of the entered numbers is : %d\n",fsum(&no1,&no2));
 
   return 0;
}
