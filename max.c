#include<stdio.h>
void main()
{
int max=0;
int a[10],i;
printf("enter 10 numbers whose maximum is to be found out");
for(i=0;i<10;i++)
{
scanf("%d \n",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n max is : %d \n",max);
}

