#include<stdio.h>
long convertB_to_D( int decimal)
{
  if(decimal == 0)
    return 0;
  else
    return (decimal%2 + 10*convertB_to_D(decimal/2));
}

           
int main()
{
    long binary;
    int decimal;

    scanf("%d",&decimal); /*Enter decimal number from test case */

    binary = convertB_to_D(decimal);
    printf("The Binary value is : %ld\n", binary);
    return 0;
}
