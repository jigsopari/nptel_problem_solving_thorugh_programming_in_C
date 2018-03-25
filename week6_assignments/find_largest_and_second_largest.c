#include<stdio.h>
void main()
{
int a[5],j,l,s;
printf("enter integers");
for(j=0;j<5;j++)
{
scanf("%d",&a[j]);
}
l = a[0];
for(j=0;j<5;j++)
{
if(a[j]>l)
l=a[j];
}
a[0]=l;

s=a[1];
for(j=1;j<5;j++)
{
if(a[j]>s)
s=a[j];
}
l=a[0];

printf("largest is %d and second is %d\n",l,s);
}
