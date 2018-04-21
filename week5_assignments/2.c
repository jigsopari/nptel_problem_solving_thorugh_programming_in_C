// to find a given number is perfect number or not. like 6 = 1+2+3
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i == 0)
{
sum=sum+i;
}
}
if(sum == n)
printf("yes a perfect no.\n");
else
printf("no not a perfect no \n");
return 0;
}
