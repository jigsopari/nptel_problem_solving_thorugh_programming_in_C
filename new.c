#include<stdio.h>
void main()
{
int i,j=1;
for(i=11;i>=0;i--)
{
j=j++%i;
}
printf("i=%d , j=%d \n",i,j);
}
