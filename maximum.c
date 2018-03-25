#include<stdio.h>
void main()
{
int n1,n2,n3;
int max;
printf("enter the number1\n");
scanf("%d",&n1);
max=n1;
printf("enter number2\n");
scanf("%d",&n2);
if(n2>max)
{
max=n2;
}
printf("enter number3\n");
scanf("%d",&n3);
if(n3>max)
{
max=n3;
}
printf("\n max is %d \n", max);
}
